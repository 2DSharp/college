#include <iostream>
#include <string>

int main() {

  int num, sum = 0;

  std::string msg = "The number isn't perfect, nothing is.";
  
  std::cout << "Enter the number: ";
  std::cin >> num;
  
  for (int i=1; i < num; i++) {
    
    if (num % i == 0) {
      sum += i;
    }
  }
  if (num == sum) {
    msg = "The number is perfect!";
  }    
  std::cout << msg << std::endl;
  
  return 0;
}
