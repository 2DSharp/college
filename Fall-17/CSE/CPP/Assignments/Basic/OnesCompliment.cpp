#include <iostream>

int main() {

  int bin, compliment = 0, num;
  
  std::cout << "Enter the binary number: ";
  std::cin >> bin;
  
  while (bin > 0) {

    num = (bin/10 == 0)? 1: 0;
    compliment += num;
    bin /=10;
  }

  std::cout << compliment << std::endl;
}
