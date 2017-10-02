Programming solutions by:	Dedipyaman Das | 17BCE7080

Looping Exercises
=================
Please go to this github repository for all the code:
https://github.com/2Dsharp/college/tree/master/Fall-17/CSE/CPP/Assignments

The name of the source code file followed by the code itself and the output is given.

Each code is written in GNU Emacs and compiled in G++ in a Linux environment.

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
DigitSum.cpp

#include <iostream>

int main(){

  int num,sum=0;
  
  std::cout << "Enter the number : ";
  
  std::cin >> num;

  while(num){

    sum += num%10;
    num /= 10;
  }
  std::cout << "Sum of digits: " << sum << std::endl;

  return 0;
}
---
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Assignments$ g++ DigitSum.cpp -o DigitSum.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Assignments$ ./DigitSum.o
Enter the number : 123
Sum of digits: 6
---
DigitProduct.cpp

#include <iostream>

int main(){

  int num,product=1;
  
  std::cout << "Enter the number : ";
  
  std::cin >> num;

  while(num){

    product *= num%10;
    num /= 10;
  }
  std::cout << "Product of digits: " << product << std::endl;

  return 0;
}
---
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Assignments$ g++ DigitProduct.cpp -o DigitProduct.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Assignments$ ./DigitProduct.o 
Enter the number : 456
Product of digits: 120
---
Reverse.cpp

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
---
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Assignments$ ./Reverse.o 
Enter the number: 12345
54321
---
Palindrome.cpp

#include <iostream>
/**
 * Palindrome Test
 * Author- Dedipyaman Das 
 * Aliases- 2D, 2DSharp, 2D-CB
 * Email- 2dcodeblocks@gmail.com
 */
int main() {
  
  int num, temp, rem, rev=0;
  
  std::cout << "Palindrome test, enter number: ";

  std::cin >> num;
  temp = num;
  
  while (num>0) {
    /* Reverse */
    rem = num % 10;
    rev = rev*10 + rem; 
    num = num/10;
  }
  
  if (rev == temp) {
    std::cout << "This is a palindrome";
  }
  
  else std::cout << "This is not a palindrome";

  std::cout << "\n";
  
  return 0;
} 
---
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Assignments$ ./Palindrome.o 
Palindrome test, enter number: 12321
This is a palindrome
---
DigitFrequency.cpp

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

---
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Assignments$ g++ DigitFrequency.cpp -o DigitFrequency.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Assignments$ ./DigitFrequency.o 
Enter the number: 123421938012389
Frequency of 0 1
Frequency of 1 3
Frequency of 2 3
Frequency of 3 3
Frequency of 4 1
Frequency of 5 0
Frequency of 6 0
Frequency of 7 0
Frequency of 8 2
Frequency of 9 2
---

NumberToWords.cpp

#include <iostream>
#include <vector>
#include <string>

int main(){

  int num, digit;
  int rem, rev;
  
  std::string sentence;
  
  std::vector<std::string> numWord
    = { "Zero", "One" , "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
    
  std::cout << "Enter the number :";
  std::cin >> num;

  while (num) {
    /* Reverse */
    rem = num % 10;
    rev = rev*10 + rem; 
    num = num/10;
  }
  
  while (rev) {

    digit = rev % 10;
    sentence += " "+ numWord[digit];
    rev /=10;
  }

  std::cout << sentence << std::endl;
  return 0;
}
---
---
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Assignments$ g++ NumbersToWords.cpp -o NumbersToWords.o --std=c++11
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Assignments$ ./NumbersToWords.o 
Enter the number :1234
 One Two Three Four
---

ASCIIValuesCharts.cpp

#include <iostream>

int main(){

  std::cout << "ASCII "<< "Representation" << std::endl;
  
  for(int i=0;i<=127;i++){

    char temp = i;
    std::cout << i << "\t" << temp << std::endl;
  }
  
  return 0;
}
---
g++ ASCIIValuesChart.cpp -o ASCIIValuesChart.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Assignments$ ./ASCIIValuesChart.o 
ASCII Representation
0	 
1	
2	
3	
4	
5	
6	
7	
8
9		
10	

11	
12	
13	
14	
15	
16	
17	
18	
19	
20	
21	
22	
23	
24	
25	
26	
27	
28	
29	
30	
31	
32	 
33	!
34	"
35	#
36	$
37	%
38	&
39	'
40	(
41	)
42	*
43	+
44	,
45	-
46	.
47	/
48	0
49	1
50	2
51	3
52	4
53	5
54	6
55	7
56	8
57	9
58	:
59	;
60	<
61	=
62	>
63	?
64	@
65	A
66	B
67	C
68	D
69	E
70	F
71	G
72	H
73	I
74	J
75	K
76	L
77	M
78	N
79	O
80	P
81	Q
82	R
83	S
84	T
85	U
86	V
87	W
88	X
89	Y
90	Z
91	[
92	\
93	]
94	^
95	_
96	`
97	a
98	b
99	c
100	d
101	e
102	f
103	g
104	h
105	i
106	j
107	k
108	l
109	m
110	n
111	o
112	p
113	q
114	r
115	s
116	t
117	u
118	v
119	w
120	x
121	y
122	z
123	{
124	|
125	}
126	~
127	
---
PowerWithLoop.cpp

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

---

dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Assignments$g++ PowerWithLoop.cpp -o PowerWithLoop.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Assignments$ ./PowerWithLoop.o 
Enter a number : 121
The power of the number is 3
---
FactorFinder.cpp

#include <iostream>
#include <cmath>

int main(){

  std::cout << "Enter a number : " ;
  int num;
  std::cin >> num;

  int limit = sqrt(num);

  std::cout << "Factors of the given number are : ";

  for(int i=1;i<=limit;i++){

    if(num%i == 0){
      std::cout << i << ",";
    }
  }
  std::cout << std::endl;
}

dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Assignments$ g++ FactorFinder.cpp -o FactorFinder.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Assignments$ ./FactorFinder.o 
Enter a number : 1000
Factors of the given number are : 1,2,4,5,8,10,20,25,
---
Factorial.cpp

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
---
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Assignments$ g++ Factorial.cpp -o Factorial.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Assignments$ ./Factorial.o
Enter a number : 5
The factorial of 5 is 120
---
HCF.cpp

#include <iostream>

int main(){

  int num1,num2;

  std::cout << "Enter 2 number separated by space or new line: ";
  std::cin >> num1 >> num2;

  while(num1 != num2) {

    if(num1 > num2) {
      num1 -= num2;
    }
    else {
      num2 -= num1;
    }
  }

  std::cout << "The required HCF is " << num1 << std::endl;
  return 0;
}
---
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Assignments$ g++ HCF.cpp -o HCF.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Assignments$ ./HCF.o 
Enter 2 number separated by space or new line: 12 24
The required HCF is 12
---

---
LCM.cpp

#include <iostream>

int main(){

  int num1,num2;

  std::cout << "Enter 2 number separated by space or new line: ";
  std::cin >> num1 >> num2;

  int prod = num1*num2;

  while(num1 != num2) {
    if(num1 > num2)
      num1 -= num2;
      else
	num2 -= num1;
    }

  std::cout << "The required LCM is " << prod/num1 << std::endl;
  return 0;
}

---
g++ LCM.cpp -o LCM.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Assignments$ ./LCM.o
Enter 2 number separated by space or new line: 2 4
The required LCM is 4
---
Prime.cpp

#include <iostream>
#include <cmath>
#include <string>

int main(){

  std::string prime;
  std::cout << "Enter a number: ";
  int num;

  std::cin >> num;

  int limit = sqrt(num);

  prime = "Prime";

  for(int i=2;i<=limit;i++){

    if((num%i == 0)) {

      prime = "Not prime";
      break;
    }
  }    
  std::cout << "It is " << prime << std::endl;
  return 0;
}
---
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Assignments$ g++ Prime.cpp -o Prime.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Assignments$ ./Prime.o
Enter a number: 17
It is Prime
---
PrimeFrom1toN.cpp

#include <iostream>
#include <cmath>

int main(){

  bool prime;
  std::cout << "Enter the number of terms: ";
  int num;

  std::cin >> num;

  for (int j = 2; j <= num; j++) {

    int limit = sqrt(j);
    prime = true;
    
    for(int i=2;i<=limit;i++){

      if(j % i == 0) {

	prime = false;
	break;
      }
    }

    if (prime) {
      std::cout << j << " ";
    }
  }
  
  std::cout  << std::endl;
  return 0;
}


---
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Assignments$ g++ PrimeFrom1toN.cpp -o PrimeFrom1toN.o --std=c++11
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Assignments$ ./PrimeFrom1toN.o 
Enter the number of terms: 10
2 3 5 7 
---
PrimeSum1toN.cpp

#include <iostream>
#include <cmath>

int main(){

  bool prime;
  std::cout << "Enter the number of terms: ";
  int num, sum = 0;
  
  std::cin >> num;

  for (int j = 2; j <= num; j++) {

    int limit = sqrt(j);
    prime = true;
    
    for(int i=2;i<=limit;i++){

      if(j % i == 0) {

	prime = false;
	break;
      }
    }

    if (prime) {
      sum += j;
    }
  }
  
  std::cout << sum  << std::endl;
  return 0;
}
---
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Assignments$ g++ PrimeSum1toN.cpp -o PrimeSum1toN.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Assignments$ ./PrimeSum1toN.o 
Enter the number of terms: 10
17

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

