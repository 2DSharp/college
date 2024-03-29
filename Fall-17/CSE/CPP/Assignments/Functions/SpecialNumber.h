#ifndef SpecialNumber
#define SpecialNumber

#include <cmath>
#include <iostream>

/* Using function pointer here */
void funcLooper(bool (*func) (int), int limit) {

  for (int i = 2; i <= limit; i++) {

    if((*func)(i)) {
      std::cout << i << "\t";
    }
  }
}
bool isPrime(int num) {

  int limit = sqrt(num);

  for(int i=2;i<=limit;i++){

    return ! (num%i == 0);
  }
  return true;
}
bool isPerfect(int num) {

  int sum= 0;
  
  for (int i=1; i < num; i++) {

    if (!(num % i)) {
	sum += i;	  
      }
  }
  
  return num == sum;
}
bool isArmstrong(int num) {

  int sum = 0, last = 0;
  int dupl = num;

  while (num > 0) {

    last = num % 10;
    sum +=pow (last, 3);
    num /= 10;
  }
    
  return dupl == sum;
}
#endif
