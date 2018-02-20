#ifndef OnesComplement
#define OnesComplement

#include <string>

std::string onesComplement(std::string binary) {

  std::string bitString;
  std::string flip = "";
  for (int i = 0; i <= binary.length()-1; i++) {
    bitString = binary.at(i);
    int bit = std::stoi(bitString);

    if (bit > 0) {
      flip += "0";
    }
    
    else {
      flip += "1";
    }
  }
  
  return flip;
}
#endif
