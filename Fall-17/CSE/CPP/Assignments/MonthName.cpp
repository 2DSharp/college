#include <iostream>
#include <vector>
#include <string>

int main() {

  int monthNum;
  std::vector<std::string> month =
    {
      "January",
      "February",
      "March",
      "April",
      "May",
      "June",
      "July",
      "August",
      "September",
      "October",
      "November",
      "December"
    };

  std::cout << "Enter the number of the month: ";  
  std::cin >> monthNum;
  
  std::cout << month.at(monthNum-1) << std::endl;
  
  return 0;

}
