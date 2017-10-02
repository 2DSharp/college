#include <iostream>

int main() {

  int lines;
  std::cout << "What should be the length of the square?: ";
  std::cin >> lines;
  for (int vertical = 1; vertical <= lines; vertical++) {
    for (int horizontal = 1; horizontal <= lines; horizontal++) {

      std::cout << "*";
    }

    std::cout << std::endl;
  }
  return 0;
}
