#include <iostream>
#include <string>

int main() {
  int a, b, c;
  std::string type;
  
  std::cout << "Enter the sides of a triangle separated by spaces: ";
  std::cin >> a >> b >> c;

  type = "Scalene";
  
  if ((a==b)==c) {
    type = "Equilateral";
  }

  else if (a==b || b==c || c==a) {
    type = "Isosceles";
  }

  std::cout << "It is a(n) " << type << " triangle" << std::endl;
  
  return 0;
}
