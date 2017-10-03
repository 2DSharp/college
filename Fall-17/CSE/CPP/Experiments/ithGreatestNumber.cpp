#include <iostream>

/**
 * Nth Bit
 * Calculates the Nth bit of a number
 * Author- Dedipyaman Das 
 * Aliases- 2D, 2DSharp, 2D-CB
 * Email- 2dcodeblocks@gmail.com
 */
  
int main() {
  int i, key;
  int arr[5] = {5, 1, 10, 4, 44};

  i = 0;
  while (i < 4) {
    if (arr[i] > arr [i+1]) {
      key = arr[i];
      arr[i] = arr[i+1];
      arr[i+1] = key;
      i++;
    }
    std::cout << arr[i] << "\t";
  }
  return 0;
} 

