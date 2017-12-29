#ifndef LinkedList_Funcs
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
};
template <typename T>
void LinkedList<T>::iterateThroughList() {

  Node * cur = new Node;
  cur = this->head;
  while (cur->next != NULL) {

    std::cout << cur->data;
    cur = cur->next;
  }
}
#endif
