#include <iostream>

int main() {

  int num, limit;
  
  std::cout << "Enter the limit: ";
  std::cin >> limit;

  num = 1;
  
    while (num <= limit) {

      int sum = 0;
      for (int i=1; i < num; i++) {
	
	if (!(num % i)) {
	  sum = sum + i;	  
	}
      }
      
      if (num == sum) {
	std::cout << " " << sum;
      }

      num++;
    }
  
  std::cout <<  std::endl;
  
  return 0;
}
