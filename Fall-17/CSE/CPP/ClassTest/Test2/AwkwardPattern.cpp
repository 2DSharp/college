#include <iostream>

/* This is indeed very bad code,I know. But for the time constraint and for the sake of sitting through the exam half awake, I had to write this one. I am sorry.
 */
int main() {

  for (int vertical = 1; vertical <= 5; vertical++) {

    int counter = 1;
    if (vertical % 2 == 0) {
      
      for (int horizontal = 1; horizontal  <= 5; horizontal++) {

	if (counter == 3) {
	  std::cout << "\t";
	}
	else {
	  std::cout << "*\t";
	}
	counter++;
      }
    }
    
    else if (vertical == 3) {

      for (int horizontal = 1; horizontal  <= 5; horizontal++) {

	if (counter % 2 == 0) {

	  std::cout << "\t";
	}
	else std::cout << "*\t";
	counter++;
      }
      
    }
    else {

      for (int horizontal = 1; horizontal  <= 5; horizontal++) {

	std::cout << "*\t";
      }
    }
    std::cout << std::endl;
  }

  return 0;
}


