#include <iostream>

int test() {

  static int var;
  var = 0;
  return ++var;
  
}
int main() {

  std::cout << test() << std::endl;
  std::cout << test() << std::endl;

  return 0;
}
