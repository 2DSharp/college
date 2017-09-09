#include <iostream>

int main() {

  float a, b, max;
  
  std::cout << "Enter the two numbers separated by spaces: ";
  std::cin >> a >> b;

  switch (a > b) {
      case 1: {
	max = a;
	break;
      }
  }
  switch (b > a) {
      case 1: {
	max = b;
	break;
      }
  }
  switch (a == b) {
      case 1: {
	std::cout << "The numbers are equal";
	break;
	return 0;
      }
  }

  std::cout << "The largest number is: " << max << std::endl;
  return 0;
}
