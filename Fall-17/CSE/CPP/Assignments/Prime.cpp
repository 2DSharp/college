#include <iostream>
#include <cmath>
#include <string>

int main(){

  std::string prime;
  std::cout << "Enter a number: ";
  int num;

  std::cin >> num;

  int limit = sqrt(num);

  prime = "Prime";

  for(int i=2;i<=limit;i++){

    if((num%i == 0)) {

      prime = "Not prime";
      break;
    }
  }    
  std::cout << "It is " << prime << std::endl;
  return 0;
}
