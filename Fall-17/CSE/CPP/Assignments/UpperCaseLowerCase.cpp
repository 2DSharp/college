#include <iostream>

int main() {

  char character;
  int ascii;

  std::cout << "Enter any alphabet: ";
  std::cin >> character;
  ascii = (int) character;

  if (ascii >= 65 && ascii <= 90) {
    std::cout << "Uppercase";
  }
  else if (ascii >= 97 && ascii <= 122) {
    std::cout << "Lowercase";
  }
  else {
    std::cout << "Please put alphabets";
  }
  
  std::cout << std::endl;
  return 0;
}
