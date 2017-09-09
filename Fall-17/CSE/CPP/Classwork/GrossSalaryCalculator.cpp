#include <iostream>

int main() {

  float basic, gross;
  float HRA = 0.3, DA = 0.95;
  
  std::cout << "Enter your basic salary: ";
  std::cin >> basic;

  if (basic <= 20000 ) {

    HRA -= 0.05;
    DA -= 0.05;
  }

  if (basic <= 10000) {

    HRA -= 0.05;
    DA -= 0.1;
  }

  gross = basic + basic*(HRA+DA);

  std::cout << "The gross is: "
	    << gross
	    << std::endl;
  return 0;
}
