#include <iostream>

void print1toN(int lim, int i = 1) {

  std::cout << i;
  
  if (i == lim) {
    return;
  }
  
  print1toN(lim, i+1);
}

int main() {

  print1toN(10);
  std::cout << std::endl;
}
