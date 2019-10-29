package me.twodee.CS2005.Practice;

import java.util.HashMap;
import java.util.Map;


class LLNode
{
    int val;
    LLNode next;
    LLNode prev;

    public LLNode(int val)
    {
        this.val = val;
    }
}
class LRUCache {
    Map<Integer, Integer> cache;
    Map<Integer, LLNode> nodeMap;

    LLNode head = null;
    LLNode tail = null;
    int capacity = 0;
    int size = 0;

    public LRUCache(int capacity) {
        cache = new HashMap<>(capacity);
        nodeMap = new HashMap<>();

        this.capacity = capacity;
    }

    public int get(int key) {
        if (!cache.containsKey(key))
            return -1;
        bringToTop(key);

        return cache.get(key);
    }

    public void put(int key, int value) {

        if (head == null && tail == null) {
            initLinkedList(key);
        }
        else {

            // it's already at full capacity, needs eviction
            if (size >= capacity) {
                resetTail();
            }
            addToTop(key);
        }
        cache.put(key, value);
        size++;

        //  System.out.println(key + " " + value + " " +  cache.size() + " " + capacity + " " + evicted + " " + head.val);
    }
    private void bringToTop(int key)
    {
        // target will be the new head
        LLNode target = nodeMap.get(key);

        if (capacity == 1)
            return;

        if (target == tail) {
            head.prev = tail;
            tail.next = head;
            tail = head;
            head = target;

            return;
        }


        // break link with neighbors
        if (target.prev != null)
            target.prev.next = target.next;
        if (target.next != null)
            target.next.prev = target.prev;

        // connect with head
        target.next = head;
        head.prev = target;

        // become head
        head = target;
    }
    private void initLinkedList(int key)
    {
        head = new LLNode(key);
        nodeMap.put(key, head);
        tail = head;
        head.next = tail;
        tail.prev = head;
    }

    private void addToTop(int key) {
        LLNode node = new LLNode(key);
        nodeMap.put(key, node);
        node.next = head;
        head.prev = node;

        head = node;
    }
    private void resetTail()
    {
        size--;
        int key = tail.val;
        nodeMap.remove(key);
        cache.remove(key);
        tail = tail.prev;
    }
}