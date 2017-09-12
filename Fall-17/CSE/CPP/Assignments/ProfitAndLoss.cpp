#include <iostream>
#include <string>

int main() {

  float sellingPrice, costPrice, percentage;
  std::string outcome;
  
  std::cout << "Enter the selling price: ";
  std::cin >> sellingPrice;

  std::cout << "Enter the cost price: ";
  std::cin >> costPrice;

  outcome = "Null";
  percentage = 0;
  
  if (sellingPrice > costPrice) {

    outcome = "Profit";
    percentage = 100*(sellingPrice-costPrice)/costPrice;
    
  }

  else if (costPrice > sellingPrice) {

    outcome = "Loss";
    percentage = 100*(costPrice - sellingPrice)/sellingPrice;
  }

  std::cout << "The outcome is: " << outcome
	    << "The percentage of " << outcome
	    << " " <<  percentage << std::endl;

  return 0;
}
