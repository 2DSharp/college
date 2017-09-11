#include <iostream>

int main() {

  int num, sum, last, first;

  std::cout << "Enter the number: ";
  std::cin >> num;

  last = num % 10;
  
  while (num > 0) {
    
    first = num;
    num /= 10;
  }
    
  sum = first + last;

  std::cout << sum << std::endl;
  return 0;
}
  
