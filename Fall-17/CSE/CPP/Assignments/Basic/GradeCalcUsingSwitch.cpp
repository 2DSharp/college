#include <iostream>
#include <string>

int main() {

  float marks;
  int range;
  std::string grade;
  
  std::cout << "Enter your marks: ";
  std::cin >> marks;

  range = marks/10;

  switch(range) {
      case 9:
      case 10: 
	  grade = "A";
	  break;
	  
      case 8:
	  grade = "B";
	  break;
	  
      case 7:
	  grade = "C";
	  break;

      case 6:
	  grade = "D";
	  break;

      case 5:
	  grade = "E";
	  break;

      default:
	  grade = "F";
	  break;
  }

  std::cout << "The grade is " << grade << "\n";
  return 0;
}
