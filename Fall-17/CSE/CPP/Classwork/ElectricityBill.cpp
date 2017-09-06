#include <iostream>

const float SLAB_1_UNIT =1.5;

int main() {

  float slab = SLAB_1_UNIT, units , amt;
  
  std::cout << "Welcome to Energy Bill Calculator \n"
	    << "Enter the number of units consumed: ";
  std::cin >> units;
  
  if (units > 100) {
    slab += 1;
  }

  if (units > 200) {
    slab += 1;
  }

  amt = units * slab;
  
  std::cout << "Number of units consumed: "
	    << units << "\n"
	    << "Amount :" << amt << "\n";

  return 0;

}
  
