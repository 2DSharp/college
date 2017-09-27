#include <iostream>
#include "SpecialNumber.h"

int main() {

  int limit;
  std::cout << "Enter the limit: ";
  
  std::cin >> limit;
  
  funcLooper(isPrime, limit);
  
  std::cout << std::endl;
  
  return 0;
}
  
