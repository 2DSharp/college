#include <iostream>
#include <string>
#include "LinkedList.h"

int main() {

  LinkedList<int>list(1);
  list.popFront();
  list.pushFront(123);
  list.pushBack(21);
  list.pushBack(11);
  list.pushBack(111);
  list.iterateThroughList();
  std::cout << std::endl;
  list.reverse();
  list.update(20, 1000);
  list.iterateThroughList();
  std::cout << std::endl;
  /*
  list.pushFront(5);
  list.pushFront(212);
  list.iterateThroughList();
  std::cout << std::endl;
  
  list.popBack();
  list.iterateThroughList();
  std::cout << std::endl;
  list.popFront();
  list.iterateThroughList();
  std::cout << std::endl;
*/
}
