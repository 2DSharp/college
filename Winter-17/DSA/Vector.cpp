#include <iostream>
#include "Vector.h"

int main() {

  Vector<int> arr;
  arr.pushBack(10);
  std::cout << arr.at(0);
}

