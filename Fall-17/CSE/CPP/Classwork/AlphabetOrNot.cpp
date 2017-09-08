#include <iostream>

int main() {

  char character;
  int ascii;
  
  std::cout << "Enter your character: ";
  std::cin >> character;

  ascii = (int) character ;

  if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122)) {

    std::cout << "It is an alphabet" << std::endl;
  }
  else std::cout << "It ain't an alphabet" << std::endl;
  
  return 0;
}
