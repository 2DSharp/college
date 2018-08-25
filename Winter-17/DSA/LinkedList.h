#ifndef LinkedList_H
#define LinkedList_H

template <typename T> class LinkedList {
  
private:
  struct Node {

    T data;
    Node * next;
  } * head,
    * tail;
  unsigned size;
  Node * createNode(T data);
  void deleteNode(Node *);
public:
  LinkedList(T headData);
  ~LinkedList();
  void iterateThroughList();
  void pushBack(T);
  void pushFront(T);
  void popBack();
  void popFront();
  void reverse();
  bool update(int, T);
  void sort();
};

#include "LinkedListFuncs.h"
#endif




