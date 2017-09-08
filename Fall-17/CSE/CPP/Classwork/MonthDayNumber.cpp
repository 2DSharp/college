#include <iostream>
#include <vector>

int main() {

  int month;
  
  std::cout << "Enter the number of the month: ";
  std::cin >> month;

  std::vector<int> monthSet =
    {
      31,28,31,30,31,30,31,31,30,31,30,31
    };

  std::cout << "The number of days in the month is: " << monthSet[month-1] << std::endl;
}
  
