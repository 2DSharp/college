#ifndef Vector_H
#define Vector_H

template <typename T> class Vector {

private:

  void createElement(T data, int index);
  int end;
  int size;
  int arr;
public:
  /**
   * Constructors and destructors
   */
  Vector();
  ~Vector();
  void pushBack(T value);
  T at(int index);
};

#include "Vector.impl.h"
#endif
