#include <iostream>

int main() {

  float a, b, max;
  int res;
  std::cout << "Enter the two numbers separated by spaces: ";
  std::cin >> a >> b;

  res = a>b;
  
  switch (res) {
      case 1: {
	max = a;
	break;
      }
  }

  res = b > a;

  switch (res) {
      case 1: {
	max = b;
	break;
      }
  }

  res = a == b;
  
  switch (res) {
      case 1: {
	std::cout << "The numbers are equal";
	break;
	return 0;
      }
  }

  std::cout << "The largest number is: " << max << std::endl;
  return 0;
}
