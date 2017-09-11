#include <iostream>

int main() {
  
  int i = 1;
  int num;
  
  std::cout << "Enter the number: ";
  std::cin >> num;
  
  while (i <= 10) {

    std::cout << num << "*" << i << " = " << num * i
	      << std::endl;
    i++;
  }


  return 0;
}
