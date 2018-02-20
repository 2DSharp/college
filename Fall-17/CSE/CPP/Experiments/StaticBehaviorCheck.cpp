#include <iostream>
int var2 = 5;
int test() {

  static int var =var2 ;
  return ++var;

}
int main() {


  std::cout << test() << std::endl;
  var2 = 10;
  std::cout << test() << std::endl;

  return 0;
}
