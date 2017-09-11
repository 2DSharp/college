#include <iostream>

int main() {

  int num, last, first;

  std::cout << "Enter the number: ";
  std::cin >> num;

  last = num % 10;
  
  while (num > 0) {
    
    first = num;
    num /= 10;
  }

  std::cout << "First: " << first << " Last: " << last << std::endl;
  return 0;
}
  
