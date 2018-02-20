#include <iostream>
#include <string>
#include "OnesComplement.h"
#include "DecToBinaryFunc.h"

std::string twosComplement(std::string binary) {

  binary = onesComplement(binary);
  std::string bitString;
  std::string flip = "";
  
  for (int i = binary.length()-1; i >= 0; i--) {

    bitString = binary.at(i);
    int bit = std::stoi(bitString);
      
      if (bit > 0) {
	flip += "0";
      }
    
    else {
      flip += "1";
      break;
    }
    
  }
  
  std::string manipulated;
    for (int j = flip.length()-1; j>=0; j--) {
      manipulated += flip.at(j);

    }
    int len = manipulated.length();
    std::string res;

    res = binary.substr(0, binary.length()-len) + manipulated;
    return res;
}
int main() {

  std::cout << "Enter the decimal: ";
  int dec;
  std::cin >> dec;
  std::string binary;
  
  binary = decToBin(dec);
  std::cout << "Decimal: " << dec << std::endl;
  std::cout << "Binary: " << binary << std::endl;
  std::cout << "One's Complement: " << onesComplement(binary)
	    << std::endl;
  std::cout << "Two's Complement: " << twosComplement(binary) << std::endl;
  return 0;
}
