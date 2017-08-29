#include <iostream>

/**
 * Sine expansion
 * Calculates the sine of a value
 * Formula- x-x^3/3!+x^5+5!-x^7+7!
 * Author- Dedipyaman Das 
 * Aliases- 2D, 2DSharp, 2D-CB
 * Email- 2dcodeblocks@gmail.com
 */
  
int main() {

  float radian, total, term, num=1.0, den;
  int power, counter=1, fact=1;
  int termNo =1;
  
  std::cout << "Calculate the sine of a value, enter value: ";
  std::cin >> radian;

  power = 1;
  
  while (counter<=7){

    while (power <= counter) {
      num = num * radian;
      power++;
    }
    prev = power;
    
    den = 1; fact =1;
    while (den <= counter) {

      fact = fact * den;
      ++den;  
    }
    std::cout << num << "/" << fact << ":";
    term = num/fact;

    if (termNo%2==0) {
      term = 0-term;
    }

    std::cout << term << ":" << counter <<"\n";
    total = total+term;
    termNo++;
    counter += 2;
  }

  std::cout << total;
  return 0;
} 


