#include <iostream>

int main(){

  std::cout << "Enter the number: ";
  int num;

  std::cin >> num;

  while(num){

    std::cout << num%10;
    num /= 10;
  }
  std::cout << std::endl;
  return 0;
}
