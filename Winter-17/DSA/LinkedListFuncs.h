#ifndef LinkedList_Funcs
#define LinkedList_Funcs
#include "LinkedList.h"
#include <iostream>

template <typename T>
LinkedList<T>::LinkedList(T data) {

  this->head = this->createNode(data);
}

template <typename T>
typename LinkedList<T>::Node * LinkedList<T>::createNode(T data) {

  Node * node = new Node;
  node->data = data;
  node->next = NULL;
}

template <typename T>
void LinkedList<T>::pushBack(T data) {

  Node * cur = this->head;
  while(cur->next != NULL) {

    cur = cur->next;
  }

  Node * newNode = createNode(data);
  cur->next = newNode;
}
template <typename T>
void LinkedList<T>::iterateThroughList() {

  Node * cur;
  cur = this->head;
  while (cur != NULL) {

    std::cout << cur->data << " ";
    cur = cur->next;
  }
}
template<typename T>
LinkedList<T>::~LinkedList() {

  Node * cur = this->head;
  Node * prevCur;

  while (cur != NULL) {

    prevCur = cur;
    cur = cur->next;
    delete prevCur;
  }
}
#endif
