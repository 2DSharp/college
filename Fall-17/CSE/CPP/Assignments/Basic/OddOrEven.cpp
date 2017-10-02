#include <iostream>

int main() {

  int num;
  
  std::cout << "Enter the number: ";
  std::cin >> num;

  if (num%2==0) {

    std::cout << "The number is even\n";
  }
  else
    std::cout << "Odd number\n";

  return 0;
}
