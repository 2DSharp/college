#ifndef LinkedList_H
#define LinkedList_H

template <typename T> class LinkedList {
  
private:
  struct Node {

    T data;
    Node * next;
  };
  Node * head;
  Node * createNode(T headDAta);

public:
  T value;
  LinkedList(T headData);
  ~LinkedList();
  void iterateThroughList();
  void pushBack(T data);  
};

#include "LinkedListFuncs.h"
#endif
