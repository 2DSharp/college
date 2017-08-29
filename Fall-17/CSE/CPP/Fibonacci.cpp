#include <iostream>
/**
 * Fibonacci Series
 * Author- Dedipyaman Das 
 * Aliases- 2D, 2DSharp, 2D-CB
 * Email- 2dcodeblocks@gmail.com
 */
int main( ) {

  int prev, curr, terms, temp, counter = 0;

  std::cout << "Enter the number of fibonacci terms required: ";
  std::cin >> terms;
  
  while (counter<terms) {

    if (counter == 0) {
      prev = 0;
      curr = 0;
    }
    if (counter == 1) {
      curr = 1;
    }
    temp = curr;
    curr = prev + curr;
    prev = temp;

    std::cout << curr << "\t";
    counter++;
  }
  std::cout << "\n";
}
