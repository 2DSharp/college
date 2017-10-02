#include <iostream>

int main() {

  double principal, time, rate, simpleInterest;

  std::cout << "Welcome to the SI calculator";

  std::cout << "\nEnter the principal amount: ";
  std::cin >> principal;

  std::cout << "\n Enter the time period: ";
  std::cin >> time;

  std::cout << "\n Enter the rate of interest: ";
  std::cin >> rate;

  simpleInterest = (principal*rate*time)/100;

  std::cout << "The simple interest is " << simpleInterest << "\n";
  return 0;
}
  
