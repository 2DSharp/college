#include <iostream>
#include "SpecialNumber.h"

int main() {

  int limit;
  std::cout << "Enter the limit: ";
  
  std::cin >> limit;
  
  funcLooper(isArmstrong, limit);
  
  std::cout << std::endl;
  
  return 0;
}
  
