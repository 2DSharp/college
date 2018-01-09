#ifndef LinkedList_H
#define LinkedList_H

template <typename T> class LinkedList {
  
private:
  struct Node {

    T data;
    Node * next;
  };
  Node * head;
  Node * createNode(T data);

public:
  LinkedList(T headData);
  ~LinkedList();
  void iterateThroughList();
  void pushBack(T data);
  void pushFront(T data);
  void popBack();
  void popFront();
  void reverse();
  bool update(int, T);
};

#include "LinkedListFuncs.h"
#endif
