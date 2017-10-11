#include <iostream>

float power(float num, int degree, float total = 1) {

  if (degree < 0) {

    num = 1/num;
    degree = 0 - degree;
  }
  if (degree > 0) {

    total *= num;
    return power(num, --degree, total);
  }

  return total;
}
int main() {

  float num;
  int degree;
  std::cout << "Enter the number and degree: ";
  std::cin >> num >> degree;

  std::cout << power(num, degree) << std::endl;

  return 0;
}
