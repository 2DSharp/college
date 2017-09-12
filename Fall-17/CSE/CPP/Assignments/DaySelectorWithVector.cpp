#include <iostream>
#include <string>
#include <vector>

int main() {

  int dayNum;
  
  std::cout << "Enter the week day number (1-7): ";
  std::cin >> dayNum;

  if (dayNum > 7) {
    std::cout << "Please enter a valid number.\n";
    main();
  }
  
  std::vector<std::string> daySet = {
    "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday",
    "Sunday"
  };

  std::cout << "The day is: " << daySet[dayNum-1] << std::endl;
  
  return 0;
}
      
  
