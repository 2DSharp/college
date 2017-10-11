#include <iostream>

int main() {

  int arr[5];

  std::cout << "Enter 5 numbers separated by spaces: ";
  std::cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

  std::cout << "The numbers you entered are: \n";

  for (int i = 0; i <= 4; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
  return 0;
  
}
