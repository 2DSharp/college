#include <iostream>

int main() {

  int age;
  float weight;

  std::cout << "Enter your age and weight separated by spaces: " ;
  std::cin >> age >> weight;

  if (age > 18 && age <55 && weight > 45) {

    std::cout << "You are eligible to donate blood!\n";
  }
  else std::cout << "Sorry, you aren't eligible to donate blood\n";

  return 0;
}
