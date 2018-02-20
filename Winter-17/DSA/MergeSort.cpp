#include <iostream>
#include <vector>

std::vector<int> merge(std::vector<int> left, std::vector<int> right) {

  int leftIndex = 0, rightIndex = 0;
  int leftEnd = left.size()-1;
  int rightEnd = right.size() - 1;

  std::vector<int> arr;
  std::cout << left.at(0);
  while (leftIndex <= leftEnd && rightIndex <= rightEnd) {

    if (left[leftIndex] < right[rightIndex]) {

      arr.push_back(left[leftIndex]);
      leftIndex++;
      
    } else {

      arr.push_back(right[rightIndex]);
      rightIndex++;
    }
  }

  while (leftIndex <= leftEnd) {
    arr.push_back(left[leftIndex]);
    leftIndex++;
  }
  while (rightIndex <= rightEnd) {
    arr.push_back(right[rightIndex]);
    rightIndex++;
  }
  
  return arr;
}
std::vector<int> mergeSort(std::vector<int>arr) {

  int end = arr.size() - 1;

  int leftEnd = end/2;
  int rightStart = leftEnd + 1;
  int rightLimit = end - leftEnd;

  std::vector<int> left;
  std::vector<int> right;

  if (arr.size() <= 1) {

    return {};
  }

  for(int i = 0; i <= leftEnd; i++) {
    
    left.push_back(arr[i]);
  }

  for(int i = 0; i < rightLimit; i++) {
    
    right.push_back(arr[rightStart+i]);
  }
  
  std::vector<int>newLeft = mergeSort(left);
  std::vector<int>newRight = mergeSort(right);
  return merge(newLeft, newRight);
}
int main() {

  std::vector<int>arr;
  arr = {5, 4, 8, 3, 1, 9, 7, 11, 18, 2, 17};
  
  std::vector<int> sortedArr = mergeSort(arr);


  for (int i = 0; i< sortedArr.size(); i++) {
    
    std::cout << sortedArr.at(i) << " ";
  }
}
  
