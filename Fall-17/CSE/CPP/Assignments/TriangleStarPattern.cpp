#include <iostream>

int main() {

  std::string star = "*";
  
  for (int i =1; i <= 5; i++){

    std::cout << star
	      << std::endl;
    star += "**";
  }
}
