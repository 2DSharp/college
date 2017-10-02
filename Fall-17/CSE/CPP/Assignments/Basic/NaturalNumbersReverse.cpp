#include <iostream>

int main() {

  int num;
  
  std::cout << "Enter the terms(n): ";
  std::cin >> num;

  int i = num;
  
  while (i >= 1) {

    std::cout << i << "\t" ;
    i--;
  }
  std::cout << std::endl;

  return 0;
}
