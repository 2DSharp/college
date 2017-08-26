#include <iostream>

/**
 * Palindrome Test
 * Author- Dedipyaman Das 
 * Aliases- 2D, 2DSharp, 2D-CB
 * Email- 2dcodeblocks@gmail.com
 */
int main() {
  
  int num, temp, rem, rev=0;
  
  std::cout << "Palindrome test, enter number: ";

  std::cin >> num;
  temp = num;
  
  while (num>0) {
    /* Reverse */
    rem = num % 10;
    rev = rev*10 + rem; 
    num = num/10;
  }
  
  if (rev == temp) {
    std::cout << "This is a palindrome";
  }
  
  else std::cout << "This is not a palindrome";

  std::cout << "\n";
  
  return 0;
} 


