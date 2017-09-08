#include <iostream>
#include <math.h>

int main() {

  int a, b, c;
  float discriminant, root1, root2;
  
  std::cout << "Quadratic equation: "
	    << "ax^2 + bx +c = 0"
	    << std::endl
	    << "Enter a, b, c separated by spaces: ";

  std::cin >> a >> b >> c;
  discriminant = b*b - 4*a*c;

  root1 = ((0 - b) - sqrt(discriminant))/(2*a);
  root2 = ((0 - b) + sqrt(discriminant))/(2*a);

  std::cout << " The roots are: " << root1 << "\t" << root2 << std::endl;

  return 0;
}
