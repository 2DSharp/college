#include <iostream>

int main(){

  int num1,num2;

  std::cout << "Enter 2 number separated by space or new line: ";
  std::cin >> num1 >> num2;

  int prod = num1*num2;

  while(num1 != num2) {
    if(num1 > num2)
      num1 -= num2;
      else
	num2 -= num1;
    }

  std::cout << "The required LCM is " << prod/num1 << std::endl;
  return 0;
}
