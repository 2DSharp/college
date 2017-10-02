#include <iostream>

int main(){

  std::cout << "Enter a number : " ;
  long long num,factorial=1;

  std::cin >> num;

  for(int i=num;i>1;i--){
    factorial *= i;
  }

  std::cout << "The factorial of " << num << " is " << factorial << std::endl;
  return 0;
}
