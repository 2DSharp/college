#include <iostream>
#include <vector>
#include "RandInputStream.h"

void merge(std::vector<int>& arr, std::vector<int>& left, std::vector<int>& right) {

  int leftIndex = 0, rightIndex = 0;
  int leftEnd = left.size()-1;
  int rightEnd = right.size() - 1;
  int index = 0;
  while (leftIndex <= leftEnd && rightIndex <= rightEnd) {
    
    if (left[leftIndex] < right[rightIndex]) {

      arr[index] = left[leftIndex];
      leftIndex++;
      
    } else {

      arr[index] = right[rightIndex];
      rightIndex++;
    }
    index++;
  }

  while (leftIndex <= leftEnd) {
    arr[index] = left[leftIndex];
    index++;
    leftIndex++;
  }
  while (rightIndex <= rightEnd) {
    arr[index] = right[rightIndex];
    index++;
    rightIndex++;
  }
}
void mergeSort(std::vector<int>& arr) {

  int end = arr.size() - 1;

  int leftEnd = end/2;
  int rightStart = leftEnd + 1;
  int rightLimit = end - leftEnd;

  std::vector<int> left;
  left.reserve(leftEnd);
  std::vector<int> right;
  right.reserve(rightLimit);

  if (arr.size() <= 1) {

    return;
  }
  for(int i = 0; i <= leftEnd; ++i) {
    
    left.push_back(arr[i]);
  }

  for(int i = 0; i < rightLimit; ++i) {
    
    right.push_back(arr[rightStart+i]);
  }
  
  mergeSort(left);
  mergeSort(right);
  merge(arr, left, right);
}
int main(int argc, char** argv) {

  std::vector<int>arr;
  //arr = {5, 4, 8, 3, 1, 9, 7, 11, 18, 2, 17};
  arr = getRandomInputValues(argv[1]);
  mergeSort(arr);

  for (int i = 0; i< arr.size(); ++i) {
    
    std::cout << arr.at(i) << " ";
  }
}
  
