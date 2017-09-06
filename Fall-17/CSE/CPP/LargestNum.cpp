#include <iostream>

int main() {
  int a, b, c, largest;

  std::cout << "Enter Three Values separated by spaces: ";
  std::cin >> a >> b >> c;

  if (a>b && a>c) {

    largest= a;
  }
  else if (b>a && b>c) {

    largest = b;
  }

  else largest = c;
  
  std::cout << largest << " is the largest\n";

  return 0;
}
