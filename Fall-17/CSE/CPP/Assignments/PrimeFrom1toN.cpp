#include <iostream>
#include <cmath>

int main(){

  bool prime;
  std::cout << "Enter the number of terms: ";
  int num;

  std::cin >> num;

  for (int j = 2; j <= num; j++) {

    int limit = sqrt(j);
    prime = true;
    
    for(int i=2;i<=limit;i++){

      if(j % i == 0) {

	prime = false;
	break;
      }
    }

    if (prime) {
      std::cout << j << " ";
    }
  }
  
  std::cout  << std::endl;
  return 0;
}


