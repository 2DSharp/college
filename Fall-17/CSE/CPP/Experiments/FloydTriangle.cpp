#include <iostream>

int main() {

  int counter = 1, horizontal = 1, vertical =1, rows;
  
  std::cout << "Floyd triangle, enter the number of rows: ";
  std::cin >> rows;

  for (vertical = 1; vertical <= rows; vertical++) {

    for (horizontal =1; horizontal<=vertical; horizontal++) {

      std::cout << counter << " ";
      counter++;
    }

    std::cout << "\n";
  }
  return 0;
}

