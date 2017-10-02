#include <iostream>

int main() {

  int lines, counter = 0;
  std::cout << "Enter the number of lines you require: ";
  std::cin >> lines;
  for (int vertical = 1; vertical <= lines/2; vertical++) {

    for (int horizontal = 1; horizontal <= vertical+counter; horizontal++) {

      std::cout << "*";
    }
    std::cout << std::endl;
    counter++; 
  }

  counter--;
  for (int revVertical = lines/2; revVertical >= 1; revVertical--) {

    for (int revHorizontal = revVertical+counter; revHorizontal >= 1; revHorizontal--) {
      std::cout << "*";
    }
    std::cout << std::endl;
    counter--;
  }

  return 0;
}
