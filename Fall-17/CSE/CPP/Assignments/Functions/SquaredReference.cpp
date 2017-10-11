/*
Write a function to square the given number using call by reference and replace
the given number with its squared value
*/
#include <iostream>

void square(int &num) {

  num = num * num;
}

int main() {

  std::cout << "Enter a number: ";

  int num;
  std::cin >> num;

  square(num);
  std::cout << num << std::endl;

  return 0;
}  
