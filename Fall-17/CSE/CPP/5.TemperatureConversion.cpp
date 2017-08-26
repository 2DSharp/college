#include <iostream>

int main() {

  int option;
  float fahr, celsius, result;
  
  std::cout << "What do you want to calculate?\n"
	    << "1. Celsius to Fahrenheit? or \n"
	    << "2. Farheneit to Celcius?\n";

  std::cout << "Enter the option number: ";

  std::cin >> option;

  switch (option) {
      case 1: {
	std::cout << "Celsius: ";
	std::cin >> celsius;
	result = fahr = (9.0/5.0)*celsius+32.0;

	break;
      }
	  
      case 2: {
	std::cout << "Fahrenheit: ";
	std::cin >> fahr;
	result = celsius= (5.0/9.0)*(fahr-32.0);

	break;
      }
  }

  std::cout << "Result: " << result << "\n";

  return 0;
}
