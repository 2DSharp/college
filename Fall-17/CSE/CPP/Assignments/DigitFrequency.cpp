#include <iostream>
#include <vector>

int main(){

  std::vector<int>freqs(10,0);
  std::cout << "Enter the number: ";

  long int num;

  std::cin >> num;

  while(num){

    ++freqs[num % 10];
    num /= 10;
  }
  for(int i=0; i<10; i++){

    std::cout << "Frequency of " << i << " " << freqs[i] << std::endl;
  }
}
