#include <iostream>

const int START_RATE = 5;
const int BULK_RATE = 3;

int main() {
  int num, rate;
  
  std::cout << "Enter the number of scanning and hardcopies of a passport size photo you want: ";
  std::cin >> num;

  rate = START_RATE;
  
  if (num >= 10 ) {
    rate = BULK_RATE;
  }

  std::cout << "Your cost is: " << rate * num;
  return 0;
}
