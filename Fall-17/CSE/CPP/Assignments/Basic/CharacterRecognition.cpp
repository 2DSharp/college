#include <iostream>

int main() {

  char character;
  int ascii;

  std::cout << "Enter any character: ";
  std::cin >> character;
  ascii = (int) character;
  
  if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 121)) {
    std::cout << "Alphabet";
    
  }
  else if (ascii >= 48 && ascii <=57) {
    std::cout << "Digit";
  }
  else {
    std::cout << "Special character";
  }
  std::cout << std::endl;
  return 0;
}

