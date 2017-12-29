#include <iostream>

class Stack {

  int initTail = 0, initHead =0;
  int *tail = &initTail;
  int *head = &initHead;
  
public:

  Stack() {

    std::cout << this->tail << " " << *this->tail << std::endl; 
    //    ++this->tail;
    *(++this->tail) = 10;

    std::cout << this->tail << " " << *this->tail << std::endl;

    this->tail = this->tail+1;
    *this->tail  = 120;

    std::cout << this->tail << " " << *this->tail << std::endl;

  }

    bool isEmpty() {

      return this->tail == 0;
    }
  
};

int main() {

  Stack stack;
  
  return 0;
}
  

  
