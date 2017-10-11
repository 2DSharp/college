#include <iostream>

int sum(int num[], int limit) {
  
  int i= 0, sum = 0;

  while(i < limit) {

    sum += num[i];
    i++;
  }

  return sum;
}

int product(int num[], int limit){

  int i= 0;
  long product=1;
  
  while(i < limit) {
    product *= num[i];
    i++;
  }

  return product;
}

int main() {

  int limit;
  std::cout << "Enter the number of numbers: ";
  std::cin >> limit;
  int arr[limit];
  std::cout << "Enter " << limit << "  numbers separated by newlines: ";

  int i = 0;
  while (i < limit) {

    std::cout << std::endl << limit - i << " more numbers: ";
    std::cin >> arr[i];
    i++;
  }


  int sumRes = sum(arr, limit);
  int prodRes = product(arr, limit);
  std::cout << "Sum: " << sumRes << std::endl
	    << "Product: " << prodRes << std::endl;
  return 0;
  
}
