#include <iostream>
#include <cmath>

int main(){
  int num;

  std::cout << "Enter a number : ";
  std::cin >> num;
  std::cout << "The prime factors are: ";

  int limit = sqrt(num);
  
  for(int i=2;i<=limit;i++){

    if(!num%i){
      std::cout << i << std::endl;
    }
    while(!num%i){
      num /= i;
    }
  }
  return 0;
}
