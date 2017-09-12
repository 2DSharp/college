#include <iostream>
#include <cmath>

int main() {

  int num, sum, last, terms;

  std::cout << "Enter the number: ";
  std::cin >> terms;

  for (int i = 1; i <= terms; i++) {

    num = i;
    sum = 0;
    
    while (num > 0) {

      last = num % 10;
      sum += pow (last, 3);
      num /= 10;
    }
    
    if (i == sum) {

      std::cout << i << "\t";
    }
  }
  std::cout << std::endl;

  return 0;
}
