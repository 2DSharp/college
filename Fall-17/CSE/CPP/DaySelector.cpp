#include <iostream>

int main() {

  int dayNum;
  
  std::cout << "Enter the number of the day: ";
  std::cin >> dayNum;

  switch(dayNum) {

      case 1: {

	std::cout << "Monday";
	break;
      }
      case 2: {

	std::cout << "Tuesday";
	break;
      }
      case 3: {

	std::cout << "Wednesday";
	break;
      }
      case 4: {

	std::cout << "Thursday";
	break;
      }
      case 5: {

	std::cout << "Friday";
	break;
      }
      case 6: {
	std::cout << "Saturday";
	break;
      }
      default: std::cout << "Sunday";
  }

  std::cout << "\n";

  return 0;
}
	  
	
	  
      

      
