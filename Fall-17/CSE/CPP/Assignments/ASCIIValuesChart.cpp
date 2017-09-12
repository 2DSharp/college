#include <iostream>

int main(){

  std::cout << "ASCII "<< "Representation" << std::endl;
  
  for(int i=0;i<=127;i++){

    char temp = i;
    std::cout << i << "\t" << temp << std::endl;
  }
  
  return 0;
}
