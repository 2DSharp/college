#include <iostream>
#include <string>

int main() {

  int num;
  std::string type;
  
  std::cout << "Enter the number: ";
  std::cin >>  num;

  switch(num % 2 == 0) {

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
	  
