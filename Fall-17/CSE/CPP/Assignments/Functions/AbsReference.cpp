/*
 Write a function to change the given number to its absolute value using call by
reference.
*/
#include <iostream>

void absolute(int &num) {

  if (num < 0) {
    num = 0- num;
  }
}
int main() {

  int num;
  std::cout << "Enter the number: ";
  std::cin >> num;

  absolute(num);

  std::cout << num << std::endl;
}
