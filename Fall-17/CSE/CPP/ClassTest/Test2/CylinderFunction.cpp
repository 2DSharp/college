#include <iostream>

const float PI = 3.14;

float getDiameter(float radius) {

  return radius * 2;
}
float getCircleCircumference(float radius) {

  return PI * getDiameter(radius);
}
float getCircumference(float radius, float height) {

  return 2 * (getCircleCircumference(radius) + height);
}

float getArea(float radius, float height) {

  return getCircleCircumference(radius) * (radius + height);
}

int main() {

  int radius, height;

  std::cout << "Enter the radius and height of the cylinder separated by spaces (in cm): ";
  std::cin >> radius >> height;

  std::cout << "Diameter: " << getDiameter(radius) << " cm" << std::endl
	    << "Circumference: " << getCircumference(radius, height) << " cm" << std::endl
	    << "Total surface area: " << getArea(radius, height) << " cm" << std::endl;

  return 0;
}
  
