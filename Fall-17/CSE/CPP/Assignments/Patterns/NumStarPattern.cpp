#include <iostream>

int main() {

  int horizontal;

  for (int vertical=1; vertical <= 9; vertical++) {

    horizontal = 1; 
    while (horizontal <= vertical) {

      std::cout << horizontal;
      
      horizontal++;
    }

    for (int i = 1; i <= 10-horizontal; i++) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
  return 0;
}
