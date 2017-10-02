#include <iostream>

const float SLAB_1_UNIT = 0.5;

int main() {

  float slab = SLAB_1_UNIT, units , amt;
  
  std::cout << "Welcome to Energy Bill Calculator \n"
	    << "Enter the number of units consumed: ";
  std::cin >> units;
  
  if (units > 100) {
    slab += 0.25;
  }

  if (units > 200) {
    slab = 1.2;
  }
  else if (units > 250) {
    slab = 1.50;
  }

  amt = units * slab;
  amt += amt*0.20;
  
  std::cout << "Number of units consumed: "
	    << units << "\n"
	    << "Amount :" << amt << "\n";

  return 0;

}
  
