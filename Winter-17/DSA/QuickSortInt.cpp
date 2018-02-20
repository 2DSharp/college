#include <iostream>
#include <vector>

void swap(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}

void quicksort(std::vector<int>& arr, int left, int right) {

  int pivot = 0;

  for (int i = 1; i <= arr.size() - 1; i++) {
    for (int j = arr.size() - 1; j >= 1; j++) {

      if (arr[i] > pivot) {
	if (arr[j] < pivot) {
	  swap(arr[j], arr[i]);
	}
	i++;
      }
      if (arr[j] < pivot) {
	j++;
      }
    }
}
int main() {

  std::vector<int>arr;
  arr = {5, 4, 8, 3, 1, 9, 7, 11, 18, 2, 17};
  
  quicksort(arr, 0, arr.size()-1);
}
