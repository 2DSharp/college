/**
 * This program calculates the sum of the series:
 * 1+11+111+1111+...+n
 *
 * @author Dedipyaman Das
 * @RegNo.: 17BCE7080
 */
#include <iostream>

int main() {

  int terms, num = 0;
  int sum = 0;
  
  std::cout << "Enter the number of the terms for the series: 1+11+111...n :";
  std::cin >> terms;

  for (int i = 1; i<= terms; i++) {

    num = num * 10 + 1;

    std::cout << " + " << num;
    sum += num;
  }

  std::cout << std::endl << "The sum is: " << sum << std::endl;

  return 0;
}
