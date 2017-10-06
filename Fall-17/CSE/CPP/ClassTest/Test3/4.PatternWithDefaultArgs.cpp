#include <iostream>

void show(int lines = 3) {

  int counter = 1;
  for (int vertical = 1; vertical <= lines; vertical++) {
    
    for (int horizontal = 1; horizontal <= counter; horizontal++) {

      std::cout << "*";
    }
    counter += 2;
    std::cout << std::endl;
  }
}
int main() {

  show();
}
