#include <iostream>

/**
 * Nth Bit
 * Calculates the Nth bit of a number
 * Author- Dedipyaman Das 
 * Aliases- 2D, 2DSharp, 2D-CB
 * Email- 2dcodeblocks@gmail.com
 */
  
int main() {

  
  int dec, bit;
  bool first = true;
  std::cout << "Convert Decimal numbers to binary for FREE! Enter decimal number: ";
  std::cin >> dec;
  std::cout << "Input: (" << dec << ") base 10 \n";

  int totalBin = 0;

  if (dec%2 == 0) {
    first = false;
  }
  
  /* Find the binary digits, arrange them in reverse */
  while (dec>0) {

    bit = dec % 2;
    totalBin = totalBin*10+bit; 
    dec = dec/2;
    std::cout << dec << "\t" << bit << "\n";
  }

  
  /* Reverse the binary to get the actual number */
  int rev = 0;
  
  while (totalBin>0) {
    bit = totalBin%10;
    rev = rev * 10 + bit;
    totalBin /=10;
  }

  if (first == false) {
    rev *=10;
  }
    std::cout << "Binary Output: " << rev << "\n";

    std::cout << "Enter term: ";
    int num, term, counter =1;
    std::cin >> term;

    while (counter < term) {

      num = rev%10;
      rev /= 10;
      counter ++;
    }
    std::cout << term << "th bit is " << num << "\n";
		    
  return 0;
} 

