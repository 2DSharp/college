#include <iostream>

class Queue {

  int front = 0, rear = 0, num, size;
  int * arr;

public:
  Queue(int num) {

    this->setSize(num);
    int inArr[num];
    this->arr = inArr;
  }

public:
  int* insert(int num) {

    if (this->rear == this->size) {
      std::cout << "Queue is full" << std::endl;
      return this->arr;
    }
    this->arr[this->rear++] = num;
    return this->arr;
  }

public:
  int* del(int arr[]) {

    if (this->front == this->rear) {

      std::cout << "Queue is empty" << std::endl;
      return this->arr;
    }
    this->arr[this->front++] = NULL;
    return this->arr;
  }

public:
  void loopArray(int arr[]) {

    std::cout << "Queue: " << std::endl;
    for (int i = this->front; i <= this->rear-1; i++) {
	      
      std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
  }

  void setSize(int num) {

    this->size = num;
  }
};

int main() {

  int num, action, pushData;
  std::cout << "Enter how big you want the Queue to be: ";
  std::cin >> num;
  
  Queue queue(num);

  while(1) {
    std::cout << "1. Insert 2. Delete: ";
    std::cin >> action;
    
    switch(action) {

	case 1:	    
	    std::cout << "Enter the number: ";
	    std::cin >> pushData;

	    queue.insert(pushData);
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
