#include <iostream>

int main() {

  long int num;

  std::cout << "Enter the number: ";
  std::cin >> num;

  int i = 0;

  std::cout << num;
  if (num < 0) {
    num = 0 - num;
    std::cout << num;
  }

  else if (num == 0) {
    num += 1;
  }
  
  while (num > 0) {

    num /= 10;
    i++;
  }

  std::cout << i << std::endl;
  return 0;
}
