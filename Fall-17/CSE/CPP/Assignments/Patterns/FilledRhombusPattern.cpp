#include <iostream>

int main() {

  int lines;
  std::cout << "Enter the number of lines: ";
  std::cin >> lines;
  int counter = lines * 2 - 1;
  
  for (int vertical = 1; vertical <= lines; vertical++) {

    for (int blank = 1; blank <= counter - lines; blank++) {
      std::cout << " ";
    }

    for (int horizontal = 1; horizontal <= lines; horizontal++) {
      std::cout << "*";
    }
    std::cout << std::endl;
    counter--;
  }

  return 0;
  }

  
