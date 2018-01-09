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
void LinkedList<T>::iterateThroughList() {
  
  if (this->head == NULL) {

    std::cout << "Empty linked list";
    return;
  }
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
void LinkedList<T>::pushFront(T data) {
  
  Node * newNode = createNode(data);
  newNode->next= this->head;
  this->head = newNode;
}
template <typename T>
void LinkedList<T>::popBack() {

  Node * cur = this->head;
  if (cur->next == NULL) {
    
    delete cur;
    this->head = NULL;
    return;
  }
  while(cur->next->next != NULL) {

    cur = cur->next;
  }
  delete cur->next;
  cur->next = NULL;
}
template <typename T>
void LinkedList<T>::popFront() {

  if (this->head->next == NULL) {
    
    delete this->head;
    this->head = NULL;
    return;
  }
  Node * newHead = this->head->next;
   
  delete this->head;
  this->head = newHead;
}
template <typename T>
void LinkedList<T>::reverse() {
  Node* prev   = NULL;
  Node* cur = this->head;
  Node* next;

  while (cur != NULL) {
    
      next  = cur->next;
      cur->next = prev;
      prev = cur;
      cur = next;
    }
  this->head = prev;
}
template <typename T>
bool LinkedList<T>::update(int pos, T data) {

  int i = 0;
  Node * cur = this->head;
  
  while (cur != NULL) {

    if (i == pos) {

      cur->data = data;
      return true;
    }  

    i++;
    cur = cur->next;
  }
  return false;
}
#endif
