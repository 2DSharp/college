#include <iostream>
#include <string>
#include "LinkedList.h"

int main() {

  LinkedList<std::string> list("Dedipyaman");
  list.pushBack("John");
  list.iterateThroughList();

  std::cout << std::endl;
  
}
