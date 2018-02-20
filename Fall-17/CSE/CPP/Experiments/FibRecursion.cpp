#include <iostream>

int fib(int num) {

  return (num <= 1) ? num : fib(num-1) + fib(num-2);
}

int main() {

  int num;
  std::cout << "Enter the fibonacci number term you want to find: ";
  std::cin >> num;

  std::cout << fib(num) << std::endl;

  return 0;
}
