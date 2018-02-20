#include <iostream>

int main() {

  int limit; 
  int num[limit];
  int median;
  
  std::cout << "Enter the number of elements: ";
  std::cin >> limit;
  std::cout << "Enter " << limit << " elements separated by RETURNs ";

  for (int i = 0; i < limit; i++) {

    std::cin >> num[i];
  }

  std::cout << "The median is: ";
  switch (limit % 2) {

      case 0:
	  median = num[((limit - 1)/2 + limit/2)/2];
	  break;

      default:
	  median = num[(limit-1)/2];
  }

  std::cout << median << std::endl;
  return 0;
}
