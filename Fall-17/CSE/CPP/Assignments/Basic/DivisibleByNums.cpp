#include <iostream>

int main() {

  int num;
  
  std::cout << "Enter the number: ";
  std::cin >> num;

  if (num % 55 == 0) {
    std::cout << "It is divisible by 5 and 11";
  }

  else
    std::cout << "It is not divisible by 5 and 11";

  return 0;   
}
