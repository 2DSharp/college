#include <iostream>

int main(){

  int num,sum=0;
  
  std::cout << "Enter the number : ";
  
  std::cin >> num;

  while(num){

    sum += num%10;
    num /= 10;
  }
  std::cout << "Sum of digits: " << sum << std::endl;

  return 0;
}
