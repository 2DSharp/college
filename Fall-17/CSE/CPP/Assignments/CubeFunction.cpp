#include <iostream>
#include <cmath>

float cube(float num) {

  return pow(num , 3);
}

int main() {

  float num;

  std::cout << "Enter a number: ";
  std::cin >> num;

  std::cout << cube(num) << std::endl;

  return 0;
}
