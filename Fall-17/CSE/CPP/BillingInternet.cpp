#include <iostream>
#include <string>

const int FIRST_HOUR_RATE = 20;
const int HALF_HOUR_RATE = 10;
const int BULK_RATE = 90;

int main() {

  int rate;
  float num;
  
  std::cout << "Enter the number of hours used for internet access: ";
  std::cin >> num;

  rate = BULK_RATE;
  
  if (num <= 0.5 ) {
    rate = HALF_HOUR_RATE;
  }
  else if (num <= 1) {
    rate = FIRST_HOUR_RATE;
  }
  std::cout << "Your cost is: " << rate  << "\n";
  return 0;
}
