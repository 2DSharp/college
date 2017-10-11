/* Write a C++ program to find power of any number using recursion. */
#include <iostream>
#include <stdlib.h>

float power(float num, int degree, float total = 1, int counter = 1) {

  if (degree == 0) {

    return 1;
  }
  
  if (degree < 0 && counter) {
    num = 1/num;
  }
  
  total *= num;
  
  if (counter < abs(degree)) {
    counter++;
    return power(num, degree, total, counter);
  }
  
  return total;
  
}

int main() {

  std::cout << power(10, 0) << std::endl;
}
