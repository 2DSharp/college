#include <iostream>
#include <ctime>

int main() {

  int a = 1;
  int b = 0;
  int c = 1;

  double sum;
  for (int i = 1; i <= 50; i++ ) {

  clock_t t;
  t = clock();

  std::cout << ((b & c) | (a & (b ^ c)));

  t = clock() - t;
  double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
  std::cout << "Time taken: " << time_taken << std::endl;

  sum += time_taken;
  }

  std::cout << std::endl << "Average: " << sum/50 << std::endl;
}
