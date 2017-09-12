#include <iostream>
#include <vector>
#include <string>

int main(){

  int num, digit;
  int rem, rev;
  
  std::string sentence;
  
  std::vector<std::string> numWord
    = { "Zero", "One" , "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
    
  std::cout << "Enter the number :";
  std::cin >> num;

  while (num) {
    /* Reverse */
    rem = num % 10;
    rev = rev*10 + rem; 
    num = num/10;
  }
  
  while (rev) {

    digit = rev % 10;
    sentence += " "+ numWord[digit];
    rev /=10;
  }

  std::cout << sentence << std::endl;
  return 0;
}
