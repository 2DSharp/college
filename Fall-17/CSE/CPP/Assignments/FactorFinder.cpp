#include <iostream>
#include <cmath>

int main(){

  std::cout << "Enter a number : " ;
  int num;
  std::cin >> num;

  int limit = sqrt(num);

  std::cout << "Factors of the given number are : ";

  for(int i=1;i<=limit;i++){

    if(num%i == 0){
      std::cout << i << ",";
    }
  }
  std::cout << std::endl;
}
