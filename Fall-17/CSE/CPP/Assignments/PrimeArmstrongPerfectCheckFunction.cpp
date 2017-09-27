#include <iostream>
#include <cmath>
#include "SpecialNumber.h"

int main() {

  int num;

  std::cout << "Enter the number: ";
  std::cin >> num;

  if (isPrime(num)) {
    std::cout << "It is prime";
  }
  if (isArmstrong(num)) {
    std::cout << "It is an armstrong number";
  }
  if (isPerfect(num)) {
    std::cout << "It is a perfect number";
  }
  std::cout << std::endl;

  return 0;
}
