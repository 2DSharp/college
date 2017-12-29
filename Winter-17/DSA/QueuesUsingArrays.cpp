#include <iostream>

int front = 0, rear = 0;

int* insert(int arr[], int size, int num) {

  if (rear == size) {
    std::cout << "Queue is full" << std::endl;
    return arr;
  }
  arr[rear++] = num;
  return arr;
}

int* del(int arr[]) {

  if (front == rear) {

    std::cout << "Queue is empty" << std::endl;
    return arr;
  }
  arr[front++] = NULL;
  return arr;
}

void loopArray(int arr[]) {

  std::cout << "Queue: " << std::endl;
  for (int i = front; i <= rear-1; i++) {
	      
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

int main() {

  int num, action, pushData;
  std::cout << "Enter how big you want the Queue to be: ";
  std::cin >> num;
  int inArr[num];
  int * arr = inArr;
  
  while(1) {
    std::cout << "1. Insert 2. Delete: ";
    std::cin >> action;
    
    switch(action) {

	case 1:	    
	    std::cout << "Enter the number: ";
	    std::cin >> pushData;

	    arr = insert(arr, num, pushData);
	    loopArray(arr);
	    
	    break;

	case 2:
	    arr = del(arr);
	    loopArray(arr);

	    break;
    }
  }  
}
