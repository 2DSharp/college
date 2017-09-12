#include <iostream>

const int TYPING_RATE = 3;
const int FIRST_RATE = 5;
const int COPIES_RATE = 3;

int main() {

  int pages, copies;
  float amt;
  
  std::cout << "Enter the number of pages you want: ";
  std::cin >> pages;

  std::cout << "Enter the number of copies you want: ";
  std::cin >> copies;

  amt = pages * TYPING_RATE;
  amt += pages * FIRST_RATE;
  amt += pages * copies * COPIES_RATE;

  std::cout << "Your cost is: " << amt << "\n";
 
  return 0;
}
