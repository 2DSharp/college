#include <iostream>

int top = 0;

int *push(int arr[], int size, int num) {

  if (top == size) {
    std::cout << "Stack overflow!\n";
    return arr;
  }
  arr[top] = num;
  top++;
  return arr;
}

int* pop(int arr[]) {

  if (top == 0) {
    std::cout << "Stack Underflow!";
    return arr;
  }
  top--;
  arr[top] = NULL;
  return arr;
}

void loopArray(int arr[]) {
  std::cout << "Stack: " << std::endl;
  for (int i = top-1; i >= 0; i--) {
	      
    std::cout << arr[i] << std::endl;
  }
}

int main() {

  int num, action, pushData;
  std::cout << "Enter how big you want the stack to be: ";
  std::cin >> num;
  int inArr[num];
  int * arr = inArr;
  
  while(1) {
    std::cout << "1. Push 2. pop: ";
    std::cin >> action;
    
    switch(action) {

	case 1:	    
	    std::cout << "Enter the number: ";
	    std::cin >> pushData;

	    arr = push(arr, num, pushData);
	    loopArray(arr);
	    break;

	case 2:

	    arr = pop(arr);
	    loopArray(arr);
	    break;
    }
  }  
}
