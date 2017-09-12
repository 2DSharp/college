#include <iostream>

int main(){

  std::cout << "Enter a number : " ;
  int num;

  std::cin >> num;
  int power = 0;

  for(int i=num;i>0;i /= 10){
    power++;
  }
  
  std::cout << "The power of the number is " << power << std::endl;
  return 0;
}

