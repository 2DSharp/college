#include <iostream>

int main() {

  int *numPtr, limit;

  std::cout << "Enter the number of elements required: ";
  std::cin >> limit;

  int num[limit];

  for (int i = 0; i < limit; i++) {

    std::cin >> num[i];

  }
  
  for (int i = 0; i < limit; i++) {

    numPtr = &num[i];
    std::cout << *numPtr << std::endl;
    numPtr++;
  }
  return 0;
}
