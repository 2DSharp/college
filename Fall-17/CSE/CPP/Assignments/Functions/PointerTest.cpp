#include <iostream>

int main() {

  int *pnum;
  int num = 100;
  
  std::cout << "Address: " << &num << "Value: " << num << std::endl;
  
  pnum = &num;
  std::cout << "Pointer Address: " << pnum << "Pointer value: " << *pnum << std::endl;

}
