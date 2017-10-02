#include <iostream>

int main() {
  
  int i = 1;
  int limit = 100;
  
  while (i <= limit) {

    std::cout <<  i << "\t" ;
    i += 2;
  }
  std::cout << std::endl;

  return 0;
}
