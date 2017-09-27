#include <iostream>

float max(float num1, float num2) {

  if (num1 > num2) {
    return num1;
  }
  return num2;
}

int main() {

  float num1, num2, larger, smaller;

  std::cout << "Input two numbers separated spaces: ";
  std::cin >> num1 >> num2;

  larger = num2;
  smaller = num1;
  
  if (num1 == max(num1, num2)) {

    larger = num1;
    smaller = num2;
  }

  std::cout << "Max: " << larger
	    << std::endl
	    << "Min: " << smaller
	    << std::endl;

  return 0;
}
