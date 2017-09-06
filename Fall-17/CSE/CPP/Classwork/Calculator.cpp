#include <iostream>

int main() {

  int operation;
  float num1, num2, res;
  
  std::cout << "This is a very, very simple calculator\n"
	    << "What do you want to do?\n"
	    << "1. Addition\n"
	    << "2. Subtraction\n"
	    << "3. Multiplication\n"
	    << "4. Division\n"
	    << "Input: ";
    
  
  std::cin >> operation;

  std::cout << "Enter the numbers separated by spaces: ";

  std::cin >> num1 >> num2;
  
  switch (operation) {

      case 1: {
	res = num1 + num2;
	break;
      }
      case 2: {
	res = num1 - num2;
	break;
      }
      case 3: {
	res = num1 * num2;
	break;
      }
      case 4: {
	res = num1 / num2;
	break;
      }	
  }

  std::cout << res << "\n";
  return 0;
}
