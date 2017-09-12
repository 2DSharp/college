#include <iostream>

int main() {

  int sum, n1, n2;

  std::cout << "Enter n1: ";
  std::cin >> n1;

  std::cout << "Enter n2: ";
  std::cin >> n2;
  
  sum = n1+n2;

  std::cout << std::endl;
  std::cout << "The sum is: " << sum << std::endl;

  return 0;
}
