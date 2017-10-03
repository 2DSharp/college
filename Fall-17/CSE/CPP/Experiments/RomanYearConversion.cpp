#include <iostream>

std::string calculateRoman(int num) {

  std::string roman;
  
  roman = "";

  switch (num) {

      case 4:
	  return roman = "IV";

      case 9:
	  return roman = "IX";
  }

  if (num >= 5 && num < 10) {

    roman = "V";
    num -= 5;
  }
  if (num >= 10) {

    roman = "X";
    num -= 10;
  }
  
  for (int i = 1; i <= num; i++) {

   
    if (i <= 3) {
      roman += "I";
    }
  }

    return roman;
}
int main() {

  int year, parts[4];

  std::string roman;
  std::cout << "Enter the year: ";
  std::cin >> year;

  roman = calculateRoman(year);

  
  int i = 3;
  while (year > 0) {
    
    parts[i] = year % 10;
    switch (i) {
	case 3: {

	  roman += calculateRoman(parts[i]);
	}
    }
    year /= 10;
    i--;
  }

  for (int i = 1; i <= parts[0]; i++) {
    roman += "M";
  }
  
  std::cout << roman << std::endl;
  
  return 0;
}
