#include <iostream>

const int INITIAL = 54;
const int MINIMUM = 300;
const int SMALL = 10;
const int BIG = 20;
const int PEBBLE_NUMBER = 10;

int main() {

  int num;
  int target = MINIMUM-INITIAL;

  /* For small pebbles */
  num = target / SMALL;
  if (target % SMALL != 0) {
    num +=1;
  }
  std::cout << "Small pebbles: " << num << std::endl;

  
  /* For small pebbles */
  num = target / BIG;
  if (target % BIG != 0) {
    num +=1;
  }
  std::cout << "Big pebbles: " << num << std::endl;
}
