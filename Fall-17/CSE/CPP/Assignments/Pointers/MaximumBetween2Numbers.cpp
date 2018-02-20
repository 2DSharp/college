#include <iostream>

int main() {

  int num1, num2;
  int *num1Ptr, *num2Ptr;

  std::cout << "Enter two numbers: ";
  std::cin >> num1 >> num2;

  num1Ptr = &num1;
  num2Ptr = &num2;

  if (*num1Ptr > *num2Ptr) {
    std::cout << num1;
  }
  else {
    std::cout << num2;
  }
  std::cout << std::endl;
  
  return 0;
}
