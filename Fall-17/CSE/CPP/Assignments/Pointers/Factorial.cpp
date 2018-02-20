#include <iostream>

int main() {

  int num, *numPtr, fact;
  
  std::cout << "Enter the number: ";
  std::cin >> num;

  numPtr = &num;

  fact = *numPtr;
  for (int i = *numPtr-1; i >= 1; i--) {

    fact *= i;
  }

  std::cout << fact << std::endl;
  return 0;
}
