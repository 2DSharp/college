#ifndef Vector_H
#define Vector_H

template <typename T> class Vector {

private:
  struct Element {
    T value;
    int index;
  };
  Element * createElement(T data, int index);
  int end;
  int size;

public:
  /**
   * Constructors and destructors
   */
  Vector();
  ~Vector();
  void push_back(T value);
};

#include "Vector.impl.h"
#endif
