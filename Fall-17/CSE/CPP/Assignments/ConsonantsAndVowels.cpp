#include <iostream>

int main() {

  char character;
  std::cin >> character;
  
  switch (character) {

      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
	  std::cout << "It is a vowel" << std::endl;
	  break;
      default:
	  std::cout << "It a consonant" << std::endl;
  }
  
  return 0;
}
