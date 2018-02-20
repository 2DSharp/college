#include <iostream>

struct fraction {

  int numerator;
  int denominator;
};

int gcd(int num1, int num2) {
  
  int max = num1;
  int min = num2;

  if (num2 > num1) {

    max = num2;
    min = num1;
  }
  
  max -= min;

  if (max != min) {
    return gcd(max, min);
  }
  return max;
}

int lcm(int num1,int num2) {

  return num1 / gcd(num1, num2) * num2;
}
int main() {

  fraction frac1, frac2, result;
  
  std::cout << "Enter numerator and denominator separated by spaces for the first number: ";
  std::cin >> frac1.numerator >> frac1.denominator;

  std::cout << "Enter numerator and denominator separated by spaces for the second number: ";
  std::cin >> frac2.numerator >> frac2.denominator;

  result.denominator = lcm(frac1.denominator, frac2.denominator-);

  result.numerator = result.denominator / frac1.denominator * frac1.numerator;
  result.numerator += result.denominator / frac2.denominator * frac2.numerator;

  std::cout << result.numerator << "/" << result.denominator << std::endl;

  return 0;
}
