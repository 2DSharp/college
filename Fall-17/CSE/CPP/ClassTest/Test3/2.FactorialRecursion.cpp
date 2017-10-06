#include <iostream>

int fact(int num) {

  return (num == 0) ? 1 : num * fact(num - 1);
}
int main() {

  int num;
  std::cout << "Enter the number: ";
  std::cin >> num;
  std::cout << "The factorial is " << fact(num) << std::endl;
}
