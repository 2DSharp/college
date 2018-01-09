#ifndef Vector_Impl
#define Vector_Impl

#include "Vector.h"
#include <iostream>

template <typename T>
Vector<T>::Vector() {

  this->end = 0;
}
template <typename T>
Vector<T>::~Vector() {
  
}

template <typename T>
typename Vector<T>::Element * Vector<T>::createElement(T data, int index) {

  Element * elem = new Element;
  elem.value = data;
  elem.index = index;

  return elem;
}
template <typename T>
void Vector<T>::push_back(T data) {

  Element * elem = createElement(data, this->end+1);
  this->size++;
}
#endif
