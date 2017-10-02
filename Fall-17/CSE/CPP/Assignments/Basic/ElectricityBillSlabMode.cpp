#include <iostream>
#include <vector>

const float SLAB_1_UNIT = 0.5;

int main() {

  float units, rem, amt;

  std::vector<float>slabCost
  {
    0.5, 0.75, 1.20, 1.50
      };

  std::vector<int>slab
  {
    50, 100, 100, 250
      };
    
  std::cout << "Welcome to Energy Bill Calculator \n"
	    << "Enter the number of units consumed: ";
  std::cin >> units;

  int i = 0;
  
  while (units > 0) {

    amt += slabCost[i]*slab[i];
    units -=slab[i];
    std::cout << units;
    i++;
  }

  return 0;
}
