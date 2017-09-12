#include <iostream>

int main() {
  int a, b, c;

  std::cout << "Enter the angles of a triangle separated by spaces: ";
  std::cin >> a >> b >> c;
  
  if ((a+b+c) == 180) {
    std::cout << "The sides form a triangle" << std::endl;
  }
  
  else
    std::cout << "The sides do not form a triangle." << std::endl;

  return 0;
}
