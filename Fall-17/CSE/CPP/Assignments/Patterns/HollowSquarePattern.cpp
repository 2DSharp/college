#include <iostream>

int main() {

  int lines;
  std::cout << "What should be the length of the square?: ";
  std::cin >> lines;
  for (int vertical = 1; vertical <= lines; vertical++) {

    if (vertical == 1 || vertical == lines) {
      for (int horizontal = 1; horizontal <= lines; horizontal++) {
	std::cout << "*";
      }
    }
    else {
      std::cout << "*";
      for (int blank = 1; blank <= lines - 2; blank++) {
	std::cout << " ";
      }
      std::cout << "*";
    }
    std::cout << std::endl;
  }
  return 0;
}
