#include <iostream>

const int MAX_MARKS = 100;

int main() {

  int grade;
  float marks[5], total, percentage;
  
  std::cout << "Enter your physics, chemistry, biology, mathematics and computer marks separated by spaces: ";

  std::cin >> marks[0] >> marks[1] >> marks[2] >> marks[3] >> marks[4];

  int i = 0;
  
  while (i <= 4) {

    if (marks[i] > MAX_MARKS) {
      std::cout << "Please enter valid marks (max. 100)";
      main();
      return 0;
    }

    total += marks[i];
    i++;
  }
  
  percentage = 100*total/500;

  grade = 72;
  int j = 40;

  if (percentage <= 40) {

    std::cout << "The percentage is " << percentage
	      << std::endl
	      << "The grade is F"
	      << std::endl;

    return 0;
  }
  
  while (j <= percentage) {

    grade--;
    j += 10;    
  }
  
  std::cout << "The percentage is " << percentage
	    << std::endl
	    << "The grade is " << (char)grade
	    << std::endl;
  
  return 0;
}
