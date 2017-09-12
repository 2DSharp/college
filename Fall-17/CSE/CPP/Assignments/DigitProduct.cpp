#include <iostream>

int main(){

  int num,product=1;
  
  std::cout << "Enter the number : ";
  
  std::cin >> num;

  while(num){

    product *= num%10;
    num /= 10;
  }
  std::cout << "Product of digits: " << product << std::endl;

  return 0;
}
