#include <iostream>

const double PI= 3.14;

int main() {

  double area, radius, base, height, length, breadth;
  int shape;
  
  std::cout << "Welcome to the Area Calculator!\n";
  std::cout << "What do you want to find the area of?\n 1. Circle 2. Triangle";
  std::cout << " 3. Square 4. Rectangle\n";

  std::cout << "Enter serial number of the shape: ";
  std::cin >> shape;

  switch(shape) {
      case 1: {
	std::cout << "Enter the Radius of the circle you want to calculate the area of: ";

	std::cin >> radius;
  
	area= PI*radius*radius;
	break;
      }
	  
      case 2: {
	std::cout << "\nEnter the Base of the triangle: ";
	std::cin >> base;
	std::cout << "Enter the height of the triangle: ";
	std::cin >> height;

	area = 0.5*base*height;
	break;
      }

      case 3: {
	std::cout << "\nEnter the side length of the square: ";
	std::cin >> length;

	area = length*length;
	  
  }
      case 4: {
	std::cout << "\nEnter the length of the rectangle: ";
	std::cin >> length;
	std::cout << "\nEnter the breadth: ";
	std::cin >> breadth;

	area= length*breadth;
      }
  }
  
  std::cout << area;
  std::cout << " is your area. \n";

  main();
  return 0;
}  
