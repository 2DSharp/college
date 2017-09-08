#include <iostream>

int main() {

  char character;
  int ascii;
  
  std::cout << "Enter your character: ";
  std::cin >> character;

  ascii = (int) character ;

  if (ascii > 65 && ascii < 117) {

    std::cout << "It is an alphabet" << std::endl;
  }

  return 0;
}
