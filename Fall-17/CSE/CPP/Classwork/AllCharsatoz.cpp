#include <iostream>

int main() {
  
  int i = 65;
  int limit = i+25;
  
  while (i <= limit) {

    std::cout << (char) i << "\t" ;
    i++;
  }
  std::cout << std::endl;

  return 0;
}
