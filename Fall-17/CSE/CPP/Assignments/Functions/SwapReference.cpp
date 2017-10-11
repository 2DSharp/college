/*
Write a function to swap two values using call by reference
*/
#include <iostream>

void swap(int &num1,int &num2) {

  int temp = num1;
  num1 = num2;
  num2 = temp;
}

int main() {

  int a;
  int b;

  std::cout << "Enter two numbers (a , b) separated by spaces: ";
  std::cin >> a >> b;

  swap(a, b);

  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;

  return 0;
}
