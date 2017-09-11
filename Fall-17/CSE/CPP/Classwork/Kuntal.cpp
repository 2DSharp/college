//15th program

#include <iostream>

int main(){
  std::cout << "Enter the number : ";
  int num,product=1;
  std::cin >> num;
  while(num){
    product *= num%10;
    num /= 10;
  }
  std::cout << "Product of digits: " << product << std::endl;
  return 0;
}

//16th

#include <iostream>

int main(){
  std::cout << "Enter the number: ";
  int num;
  std::cin >> num;
  while(num){
    std::cout << num%10;
    num /= 10;
  }
  std::cout << std::endl;
  return 0;
}

//17th

#include <iostream>

int main(){
  std::cout << "Enter the number: ";
  int num,reverse,power = 1;
  std::cin >> num;
  while(num){
    reverse += num%10 * power;
    num /= 10;
    power *= 10;
  }
  if(reverse == num){
    std::cout << "The number is palindrome." << std::endl;
  }else{
    std::cout << "The number is not a palindrome." << std::endl;
  }
  return 0;
}

//18th

#include <iostream>
#include <vector>

int main(){
  std::vector<int>freqs(10,0);
  std::cout << "Enter the number: ";
  int num;
  std::cin >> num;
  while(num){
    freqs[num%10]++;
    num /= 10;
  }

  for(int i=0;i<10;i++){
    std::cout << "Frequency of " << i << " " << freqs[i] << std::endl;
  }
}

//19th It is incomplete

#include <iostream>
#include <vector>
#include <string>

int main(){
  std::cout << "Enter the number :";
  int num,reverse,power=1;
  std::cin >> num;
  std::vector<std::string>largeSuf = {"hundred","thousand","million","billion","trillion"};
  std::vector<std::string>tens = {"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
  std::vector<std::string>uniqueTens = {"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
  std::string numWords = "";

  while(num){
    reverse += num%10 * power;
    num /= 10;
    power *= 10;
  }

  while(reverse){

    reverse /= 10;
  }

  return 0;
}

//20th

#include <iostream>

int main(){
  std::cout << "Ascii Code "<< "Represents" << std::endl;
  for(int i=0;i<=127;i++){
    char temp = i;
    std::cout << i << "          " << temp << std::endl;
  }
  return 0;
}

//21st

#include <iostream>

int main(){
  std::cout << "Enter a number : " ;
  int num;
  std::cin >> num;
  int power = 0;
  for(int i=num;i>0;i /= 10){
    power++;
  }

  std::cout << "The power of the number is " << power << std::endl;
  return 0;
}

//22nd

#include <iostream>
#include <cmath>

int main(){
  std::cout << "Enter a number : " ;
  int num;
  std::cin >> num;
  int limit = sqrt(num);
  std::cout << "Factors of the given number are : ";
  for(int i=1;i<=limit;i++){
    if(!num%i){
      std::cout << i << "," << num/i;
    }
  }
  std::cout << std::endl;
}

//23rd

#include <iostream>

int main(){
  std::cout << "Enter a number : " ;
  long long num,factorial=1;
  std::cin >> num;
  for(int i=num;i>1;i--){
    factorial *= i;
  }

  std::cout << "The factorial of " << num << " is " << factorial << std::endl;
  return 0;
}

//24th

#include <iostream>

int main(){
  int num1,num2;
  std::cout << "Enter 2 number separated by space or new line: ";
  std::cin >> num1 >> num2;

  while(num1 != num2)
    {
      if(num1 > num2)
	num1 -= num2;
      else
	num2 -= num1;
    }

  std::cout << "The required HCF is " << num1 << std::endl;
  return 0;
}

//25th

#include <iostream>

int main(){
  int num1,num2;
  std::cout << "Enter 2 number separated by space or new line: ";
  std::cin >> num1 >> num2;
  int prod = num1*num2;

  while(num1 != num2)
    {
      if(num1 > num2)
	num1 -= num2;
      else
	num2 -= num1;
    }

  std::cout << "The required LCM is " << prod/num1 << std::endl;
  return 0;
}

//26th

//Author : Kuntal Majumder
//This program takes a number and displays whether it is prime or not
//Note : This wont work on Turbo (Who uses that anyway?)
//Compiled with gcc 5.4

#include <iostream>
#include <math.h>

//Basically a prime number is only divisible by 1 and itself
//So the basic algorithm is to try each and every number smaller than the given
//number and bigger than 1, if it is divisible by anyone of them it is not a prime number

bool isPrime(int num){
  int limit = sqrt(num);//We need math.h for it
  for(int i=2;i<=limit;i++){
    if(!(num%i)){//A little bit of compression, it means num%i == 0
      return false;
    }
  }

  return true;
}

int main(){
  std::cout << "Enter a number: ";
  int num;
  std::cin >> num;
  if(isPrime(num)){
    std::cout << "It is Prime."<< std::endl;
  }else{
    std::cout << "It is not Prime." << std::endl;
  }
  return 0;
}

//27th

#include <iostream>
#include <vector>

int main(){
  std::cout << "Enter a number: ";
  int num;
  std::cin >> num;
  std::vector<bool>primelist(n+1,true);
  std::cout << "The prime numbers are: ";
  for(int i=2;i<=n;i++){
    if(primelist[i]){
      int temp = i, multiplier = 3;
      temp *= 2;
      while(temp <= num){
	primelist[temp] = false;
	multiplier++;
	temp *= multiplier;
      }
      std::cout << i << " ";
    }
  }

  std::cout << std::endl;
  return 0;
}

//28th

#include <iostream>
#include <vector>

int main(){
  std::cout << "Enter a number: ";
  int num,sum=0;
  std::cin >> num;
  std::vector<bool>primelist(n+1,true);
  for(int i=2;i<=n;i++){
    if(primelist[i]){
      int temp = i, multiplier = 3;
      temp *= 2;
      while(temp <= num){
	primelist[temp] = false;
	multiplier++;
	temp *= multiplier;
      }
      sum += i;
    }
  }

  std::cout << "The sum is " << sum << std::endl;
  return 0;
}

//29th

#include <iostream>
#include <cmath>

int main(){
  int num;
  std::cout << "Enter a number : ";
  std::cin >> num;
  std::cout << "The prime factors are: "
    int limit = sqrt(num);
  for(int i=2;i<=limit;i++){
    if(!num%i){
      std::cout << i << std::endl;
    }
    while(!num%i){
      num /= i;
    }
  }
  return 0;
}

//30th

#include <iostream>
#include <cmath>

int main(){
  int num;
  std::cout << "Enter a number : ";
  std::cin >> num;
  int power = 0;
  for(int i=num;i>0;i /= 10){
    power++;
  }
  int armNum = 0;
  while(num){
    armNum += pow(num%10,power);
    num /= 10;
  }
  if(armNum == num){
    std::cout << "It is an ArmStrong number" << std::endl:
  }else{
    std::cout << "It is not an ArmStrong number" << std::endl:
  }
  return 0;
}
