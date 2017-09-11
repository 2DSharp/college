#include <iostream>
#include <string>

int main() {
  int a, b, c;
  std::string type;
  
  std::cout << "Enter the sides of a triangle separated by spaces: ";
  std::cin >> a >> b >> c;

  type = "Scalene";
  

  if (a==b || b==c || c==a) {
    type = "Isosceles";
  }
  if ((a==b) && (b==c)) {
    type = "Equilateral";
  }

  std::cout << "It is a(n) " << type << " triangle" << std::endl;
  
  return 0;
}
