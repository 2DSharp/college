#include <iostream>

bool isEven(int num) {

  return num % 2 == 0;
}

int main() {

  int num;

  std::cout << "Enter your number: ";
  std::cin >> num;

  if (isEven(num)) {

    std::cout << "It is even";
  }

  else  std::cout << "It's odd";

  std::cout << std::endl;

  return 0;
}
