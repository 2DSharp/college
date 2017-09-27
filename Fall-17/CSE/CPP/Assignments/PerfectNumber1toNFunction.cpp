#include <iostream>
#include "SpecialNumber.h"

int main() {

  int limit;
  std::cout << "Enter the limit: ";
  
  std::cin >> limit;
  
  funcLooper(isPerfect, limit);
  
  std::cout << std::endl;
  
  return 0;
}
  
