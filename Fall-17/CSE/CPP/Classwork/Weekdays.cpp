#include <iostream>
#include <string>

int main() {

  int dayNum;
  std::string day;
  
  std::cout << "Enter the week day number (1-7): ";
  std::cin >> dayNum;

  if (dayNum == 1) {
    day = "Mon";
  }
  else if (dayNum == 2) {
    day = "Tues";
  }
  else if (dayNum == 3) {
    day = "Wed";
  }
  else if (dayNum == 4) {
    day = "Thurs";
  }
  else if (dayNum ==5) {
    day = "Fri";
  }
  else if (dayNum == 6) {
    day = "Satur";
  }
  else if (dayNum == 7) {
    day = "Sun";
  }
  else {
    day = "Invali";
  }

  std::cout << "The day is: " << day << "day." << std::endl;

  return 0;
}
      
  
