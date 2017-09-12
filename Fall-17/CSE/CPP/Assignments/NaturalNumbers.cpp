#include <iostream>

int main() {

  int num;
  
  std::cout << "Enter the terms(n): ";
  std::cin >> num;

  int i = 1;
  
  while (i <= num) {

    std::cout << i << "\t" ;
    i++;
  }
  std::cout << std::endl;

  return 0;
}
