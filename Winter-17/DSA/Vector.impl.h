#ifndef Vector_Impl
#define Vector_Impl

#include "Vector.h"
#include <iostream>

template <typename T>
Vector<T>::Vector() {

  this->size = 0;
  int * arr = new int[size];
  this->arr = arr;
}
template <typename T>
Vector<T>::~Vector() {
  
}

template <typename T>
void Vector<T>::createElement(T data, int index) {
  
  int * temp = new int[this->size++];

  for (int i = 0; i < size; i++) {
    temp[i] = this->arr[i];
  }
  delete [] this->arr;
  this->arr = temp;
  this->arr[index] = data;
}
template <typename T>
void Vector<T>::pushBack(T data) {

  this.createElement(data, this->size - 1);
}
template <typename T>
T Vector<T>::at(int index) {

  return this->arr[index];
}
#endif
