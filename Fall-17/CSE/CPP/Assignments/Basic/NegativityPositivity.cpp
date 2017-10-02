#include <iostream>
#include <string>

int main() {

  int num;
  std::string type;

  std::cout << "Enter the number: ";
  std::cin >> num;

  type = "Zero";
  
  if (num > 0) {
    type = "Positive";
  }
  else if (num < 0) {
    type = "Negative";
  }

  std::cout << "The number is " << type << "\n";

  return 0;
}
