#include <iostream>
#include <cmath>
/**
 * Pi series
 * Calculates the Pi upto specified precision
 * Author- Dedipyaman Das 
 * Aliases- 2D, 2DSharp, 2D-CB
 * Email- 2dcodeblocks@gmail.com
 */
  
int main() {

  float pi = 0;
  int terms;

  std::cout << "Enter the precision you want: ";
  std::cin >> terms;
  
  for (int i = 0; i <= terms; i++) {

    pi += (pow((-1), i) / (2 * i + 1));
  }

  pi *= 4;

  std::cout << pi << std::endl;
    
  return 0;
} 


