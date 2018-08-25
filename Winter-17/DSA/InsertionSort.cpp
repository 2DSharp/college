#include <iostream>
#include <vector>
#include "RandInputStream.h"

int main(int argc, char** argv) {

  std::vector<int> arr;
  //arr = {5, 2, 4, 7, 3, 1, 23, 90, 78, 0 };
  arr = getRandomInputValues(argv[1]);
  
  int temp;
  for (int i = 0; i <= arr.size(); i++) {

    for (int j = i - 1; j >= 0; j--) {

      if (arr[j -1] > arr[j]) {

	temp = arr[j];
	arr[j] = arr[j-1];
	arr[j-1] = temp;
      }
    }
  }
  for (int i = 0; i <= arr.size() - 1; i++) {
    std::cout << arr[i] << " ";
  }
}
