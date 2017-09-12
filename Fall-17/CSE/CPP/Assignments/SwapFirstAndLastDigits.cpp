#include <iostream>
#include <cmath>

int main() {

  int num, dupl, last, first, digits;

  std::cout << "Enter the number: ";
  std::cin >> num;

  dupl = num;
  
  last = num % 10;
  
  while (num > 0) {

    digits++;
    first = num;
    num /= 10;
  }
  
  num =  dupl % (first * (int)pow(10,digits-1));
  num = num / 10;
  
  std::cout << last << num << first << std::endl;
  
  
  return 0;
}
  
