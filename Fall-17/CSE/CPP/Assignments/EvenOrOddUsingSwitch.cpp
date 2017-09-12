#include <iostream>
#include <string>

int main() {

  int num;
  std::string type;
  
  std::cout << "Enter the number: ";
  std::cin >>  num;

  int res = num % 2 ==0;
  switch(res) {

      case 0:
	  type = "Odd";
	  break;
	  
      case 1:
	  type = "Even";
	  break;
  }

  std::cout << "The number is: " << type << std::endl;

  return 0;
}
	  
