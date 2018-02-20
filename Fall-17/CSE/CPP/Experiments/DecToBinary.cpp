#include <iostream>
#include <string>
/**
 * Decimal to Binary conversion
 * Author- Dedipyaman Das 
 * Aliases- 2D, 2DSharp, 2D-CB
 * Email- 2dcodeblocks@gmail.com
 */
int main( ) {

  std::string binary, binaryRev;
  int dec, bit;

  std::cout << "Convert Decimal numbers to binary for FREE! Enter decimal number: ";
  std::cin >> dec;
  std::cout << "Input: (" << dec << ") base 10 \n";
  
  /* Find the binary digits, arrange them in reverse */
  while (dec>0) {

    bit = dec % 2;
 
    dec = dec/2;
    
    binaryRev = binaryRev + std::to_string(bit);
    std::cout << dec << "\t" << bit << "\n";
  }

  for (int i = binaryRev.length(); i > 0; i--) {
    
    binary += binaryRev.at(i-1);
  }
  /* Reverse the binary to get the actual number */
  std::cout << "Binary Output: " << binary << "\n";
  
  return 0;
}
