#include <iostream>

int main() {

  int *pnum;
  int num = 100;
  
  std::cout << "Address: " << &num << "Value: " << num << std::endl;
  
  pnum = &num;
  std::cout << "Pointer Address: " << pnum << "Pointer value: " << *pnum << std::endl;

  num = 10;
  std::cout << "Pointer Address: " << pnum << " Pointer value: " << *pnum << std::endl;

  num = 2;

  std::cout << "Address of num: " << &num << std::endl;
  std::cout << "Value of c (c): " << num << std::endl;
  

}
