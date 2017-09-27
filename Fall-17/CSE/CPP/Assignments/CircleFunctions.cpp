#include <iostream>

float const PI = 3.14;

float getDiameter(float radius) {

  return radius * 2;
}
float getCircumference(float radius) {

  return 2 * PI * radius;
}
float getArea(float radius) {

  return PI * radius * radius;
}

int main() {

  float radius;

  std::cout << "Enter the radius of the circle: ";
  std::cin >> radius;

  std::cout << "Diameter: " << getDiameter(radius) << std::endl;
  std::cout << "Circumference: " << getCircumference(radius) << std::endl;
  std::cout << "Area: " << getArea(radius) << std::endl;

  return 0;
}
  
