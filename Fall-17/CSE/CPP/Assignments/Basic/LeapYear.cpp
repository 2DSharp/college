#include <iostream>
#include <string>

int main() {

  int year;
  std::string type;
  
  std::cout << "Enter year: ";
  std::cin >> year;

  type = "Common year";
  
  if ((year % 4  == 0) && (year % 100 != 0) || (year % 400 == 0)) {
    type= "Leap year";
  }

  std::cout << "It is a " << type << "\n";

  return 0;
}
