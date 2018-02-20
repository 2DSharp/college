#ifndef DecToBinaryFunc
#define DecToBinaryFunc

#include <string>

std::string decToBin(int dec) {

  std::string binary, binaryRev;
  int bit;
  
  /* Find the binary digits, arrange them in reverse */
  while (dec>0) {

    bit = dec % 2; 
    dec /= 2;
    
    binaryRev = binaryRev + std::to_string(bit);
  }
  
  for (int i = binaryRev.length(); i > 0; i--) {
    
    binary += binaryRev.at(i-1);
  }

  return binary;
}

#endif
