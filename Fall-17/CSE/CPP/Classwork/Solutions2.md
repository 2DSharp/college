NaturalNumbers.cpp

#include <iostream>

int main() {

  int num;
  
  std::cout << "Enter the terms(n): ";
  std::cin >> num;

  int i = 1;
  
  while (i <= num) {

    std::cout << i << "\t" ;
    i++;
  }
  std::cout << std::endl;

  return 0;
}
---
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ g++ NaturalNumbers.cpp -o NaturalNumbers.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./NaturalNumbers.o 
Enter the terms(n): 10
1	2	3	4	5	6	7	8	9	10	
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$
---

NaturalNumbers.cpp

#include <iostream>

int main() {

  int num;
  
  std::cout << "Enter the terms(n): ";
  std::cin >> num;

  int i = num;
  
  while (i >= 1) {

    std::cout << i << "\t" ;
    i--;
  }
  std::cout << std::endl;

  return 0;
}
---

dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ g++ NaturalNumbersReverse.cpp -o NaturalNumbersReverse.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./NaturalNumbersReverse.o 
Enter the terms(n): 10
10	9	8	7	6	5	4	3	2	1	
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$
---

AllCharsatoz.cpp

#include <iostream>

int main() {
  
  int i = 65;
  int limit = i+25;
  
  while (i <= limit) {

    std::cout << (char) i << "\t" ;
    i++;
  }
  std::cout << std::endl;

  return 0;
}
---
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ g++ AllCharsatoz.cpp -o AllCharsatoz.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./AllCharsatoz.o 
A	B	C	D	E	F	G	H	I	J	K	L	M	N	O	P	Q	R	S	T	U	V	W	X	Y	Z	
---
OddNumbersToHundred.cpp

#include <iostream>

int main() {
  
  int i = 1;
  int limit = 100;
  
  while (i <= limit) {

    std::cout <<  i << "\t" ;
    i += 2;
  }
  std::cout << std::endl;

  return 0;
}
---
g++ OddNumbersToHundred.cpp -o OddNumbersToHundred.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./OddNumbersToHundred.o 
1	3	5	7	9	11	13	15	17	19	21	23	25	27	29	31	33	35	37	39	41	43	45	47	49	51	53	55	57	59	61	63	65	67	69	71	73	75	77	79	81	83	85	87	89	91	93	95	97	99	
---
SumTillN.cpp

#include <iostream>

int main() {
  
  int i = 1;
  int limit;
  int sum = 0;

  std::cout << "Enter the limit: ";
  std::cin >> limit;
  
  while (i <= limit) {

    sum += i;
    i++;
  }
  std::cout << sum << std::endl;

  return 0;
}

---
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ g++ SumTillN.cpp -o SumTillN.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./SumTillN.o 
Enter the limit: 10
55
---
SumTillN-Even.cpp

#include <iostream>

int main() {
  
  int i = 2;
  int limit;
  int sum = 0;

  std::cout << "Enter the limit: ";
  std::cin >> limit;
  
  while (i <= limit) {

    sum += i;
    i += 2;
  }
  std::cout << sum << std::endl;

  return 0;
}

---
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./SumTillN-Even.o 
Enter the limit: 10
30
---
SumTillN-Odd.cpp

#include <iostream>

int main() {
  
  int i = 1;
  int limit;
  int sum = 0;

  std::cout << "Enter the limit: ";
  std::cin >> limit;
  
  while (i <= limit) {

    sum += i;
    i += 2;
  }
  std::cout << sum << std::endl;

  return 0;
}
---
g++ SumTillN-Odd.cpp -o SumTillN-Odd.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./SumTillN-Odd.o 
Enter the limit: 10
25
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$
---

MultiplicationTable.cpp

#include <iostream>

int main() {
  
  int i = 1;
  int num;
  
  std::cout << "Enter the number: ";
  std::cin >> num;
  
  while (i <= 10) {

    std::cout << num << "*" << i << " = " << num * i
	      << std::endl;
    i++;
  }


  return 0;
}

---
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ g++ MultiplicationTable.cpp -o MultiplicationTable.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./MultiplicationTable.o 
Enter the number: 17
17*1 = 17
17*2 = 34
17*3 = 51
17*4 = 68
17*5 = 85
17*6 = 102
17*7 = 119
17*8 = 136
17*9 = 153
17*10 = 170
---

DigitCounter.cpp

#include <iostream>

int main() {

  long int num;

  std::cout << "Enter the number: ";
  std::cin >> num;

  int i = 0;

  if (num < 0) {

    num = 0 - num;
  }
  else if (num == 0) {

    num = 1;
  }
  while (num > 0) {

    num /= 10;
    i++;
  }
  std::cout << i << std::endl;

  return 0;
}

---

dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./DigitCounter.o 
Enter the number: 12321
5
---
FirstAndLastDigit.cpp

#include <iostream>

int main() {

  int num, last, first;

  std::cout << "Enter the number: ";
  std::cin >> num;

  last = num % 10;
  
  while (num > 0) {
    
    first = num;
    num /= 10;
  }

  std::cout << "First: " << first << " Last: " << last << std::endl;
  return 0;
}
  

---
g++ FirstAndLastDigits.cpp -o FirstAndLastDigits.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./FirstAndLastDigits.o
Enter the number: 456
First: 4 Last: 6

---

FirstAndLastDigitSum.cpp

#include <iostream>

int main() {

  int num, sum, last, first;

  std::cout << "Enter the number: ";
  std::cin >> num;

  last = num % 10;
  
  while (num > 0) {
    
    first = num;
    num /= 10;
  }
    
  sum = first + last;

  std::cout << sum << std::endl;
  return 0;
}
  
---
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ g++ FirstAndLastDigitsSum.cpp -o FirstAndLastDigitsSum.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./FirstAndLastDigitsSum.o 
Enter the number: 123
4
---

SwapFirstAndLastDigits.cpp

#include <iostream>
#include <cmath>

int main() {

  int num, dupl, last, first, digits;

  std::cout << "Enter the number: ";
  std::cin >> num;

  dupl = num;
  
  last = num % 10;
  
  while (num > 0) {

    digits++;
    first = num;
    num /= 10;
  }
  
  num =  dupl % (first * (int)pow(10,digits-1));
  num = num / 10;
  
  std::cout << last << num << first << std::endl;
  
  
  return 0;
}
  
---
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ g++ SwapFirstAndLastDigits.cpp -o SwapFirstAndLastDigits.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./SwapFirstAndLastDigits.o 
Enter the number: 12345678
82345671

---
ArmstrongFrom1toN.cpp

#include <iostream>
#include <cmath>

int main() {

  int num, sum, last, terms;

  std::cout << "Enter the number: ";
  std::cin >> terms;

  for (int i = 1; i <= terms; i++) {

    num = i;
    sum = 0;
    
    while (num > 0) {

      last = num % 10;
      sum += pow (last, 3);
      num /= 10;
    }
    
    if (i == sum) {

      std::cout << i << "\t";
    }
  }
  std::cout << std::endl;

  return 0;
}
---

g++ ArmstrongFrom1toN.cpp -o ArmstrongFrom1toN.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./ArmstrongFrom1toN.o 
Enter the number: 1000
1	153	370	371	407
---

PerfectNumberCheck.cpp

#include <iostream>
#include <string>

int main() {

  int num, sum = 0;

  std::string msg = "The number isn't perfect, nothing is.";
  
  std::cout << "Enter the number: ";
  std::cin >> num;
  
  for (int i=1; i < num; i++) {
    
    if (! (num % i) {
      sum += i;
    }
  }
  if (num == sum) {
    msg = "The number is perfect!";
  }    
  std::cout << msg << std::endl;
  
  return 0;
}
---
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ g++ PerfectNumberCheck.cpp -o PerfectNumberCheck.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./PerfectNumberCheck.o 
Enter the number: 28
The number is perfect!
---
PerfectNumber1toN.cpp

#include <iostream>

int main() {

  int num, limit;
  
  std::cout << "Enter the limit: ";
  std::cin >> limit;

  num = 1;
  
    while (num <= limit) {

      int sum = 0;
      for (int i=1; i < num; i++) {
	
	if (!(num % i)) {
	  sum = sum + i;	  
	}
      }
      
      if (num == sum) {
	std::cout << " " << sum;
      }

      num++;
    }
  
  std::cout <<  std::endl;
  
  return 0;
}

---
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ g++ PerfectNumber1toN.cpp -o PerfectNumber1toN.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./PerfectNumber1toN.o 
Enter the limit: 30
 6 28
---

