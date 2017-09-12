#include <iostream>

int main() {
  
  int i = 1;
  int limit;
  int sum = 0;

  std::cout << "Enter the limit: ";
  std::cin >> limit;
  
  while (i <= limit) {

    sum += i;
    i++;
  }
  std::cout << sum << std::endl;

  return 0;
}
