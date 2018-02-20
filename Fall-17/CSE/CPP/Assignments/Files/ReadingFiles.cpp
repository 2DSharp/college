#include <iostream>
#include <fstream>
#include <string>

int main() {

  std::string file = "hello.dat";
  std::string dataOut;
  
  std::ifstream data(file.c_str());

  if (!data.is_open()) {

    std::cout << "Can't open file " << file << std::endl;
  }

  else {

    while (std::getline(data, dataOut, '\0')) {

      if (dataOut.compare(" ")!= 0) {
	std::cout << "{space}";
      }
      else
	std::cout << dataOut;
    }
  }
}
