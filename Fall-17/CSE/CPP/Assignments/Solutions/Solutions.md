Programming solutions by:	Dedipyaman Das | 17BCE7080

Please go to this github repository for all the code:
https://github.com/2Dsharp/college/tree/master/Fall-17/CSE/CPP/Classwork

The name of the source code file followed by the code itself and the output is given.

Each code is written in GNU Emacs and compiled in G++ in a Linux environment. 

NegativityPositivity.cpp

#include <iostream>
#include <string>

int main() {

  int num;
  std::string type;

  std::cout << "Enter the number: ";
  std::cin >> num;

  type = "Zero";
  
  if (num > 0) {
    type = "Positive";
  }
  else if (num < 0) {
    type = "Negative";
  }

  std::cout << "The number is " << type << "\n";

  return 0;
}
--
g++ NegativityPositivity.cpp -o NegativityPositivity.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./NegativityPositivity.o 
Enter the number: 12
The number is Positive

Divisible by Nums

#include <iostream>

int main() {

  int num;
  
  std::cout << "Enter the number: ";
  std::cin >> num;

  if (num % 55 == 0) {
    std::cout << "It is divisible by 5 and 11";
  }

  else
    std::cout << "It is not divisible by 5 and 11";

  return 0;   
}

--
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ g++ DivisibleByNums.cpp -o DivisibleByNums.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./DivisibleByNums.o 
Enter the number: 110
It is divisible by 5 and 11

OddOrEven.cpp

#include <iostream>

int main() {

  int num;
  
  std::cout << "Enter the number: ";
  std::cin >> num;

  if (num%2==0) {

    std::cout << "The number is even\n";
  }
  else
    std::cout << "Odd number\n";

  return 0;
}

--
./OddOrEven.o 
Enter the number: 17
Odd number

LeapYear.cpp

#include <iostream>
#include <string>

int main() {

  int year;
  std::string type;
  
  std::cout << "Enter year: ";
  std::cin >> year;

  type = "Common year";
  
  if ((year % 4  == 0) && (year % 100 != 0) || (year % 400 == 0)) {
    type= "Leap year";
  }

  std::cout << "It is a " << type << "\n";

  return 0;
}
--
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./LeapYear.o 
Enter year: 1990
It is a Common year

AlphabetOrNot.cpp

#include <iostream>

int main() {

  char character;
  int ascii;
  
  std::cout << "Enter your character: ";
  std::cin >> character;

  ascii = (int) character ;

  if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122)) {

    std::cout << "It is an alphabet" << std::endl;
  }
  else std::cout << "It ain't an alphabet" << std::endl;
  
  return 0;
}
--
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./AlphabetOrNot.o 
Enter your character: p
It is an alphabet

ConsonantsAndVowels.cpp

#include <iostream>

int main() {

  char character;
  std::cin >> character;
  
  switch (character) {

      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
	  std::cout << "It is a vowel" << std::endl;
	  break;
      default:
	  std::cout << "It a consonant" << std::endl;
  }
  
  return 0;
}

--
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./ConsonantsAndVowels.o 
Enter any alphabet: o
It is a vowel

CharacterRecognition.cpp

#include <iostream>

int main() {

  char character;
  int ascii;

  std::cout << "Enter any character: ";
  std::cin >> character;
  ascii = (int) character;
  
  if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 121)) {
    std::cout << "Alphabet";
    
  }
  else if (ascii >= 48 && ascii <=57) {
    std::cout << "Digit";
  }
  else {
    std::cout << "Special character";
  }
  std::cout << std::endl;
  return 0;
}

--
./CharacterRecognition.o 
Enter any character: q
Alphabet

UpperCaseLowerCase.cpp

#include <iostream>

int main() {

  char character;
  int ascii;

  std::cout << "Enter any alphabet: ";
  std::cin >> character;
  ascii = (int) character;

  if (ascii >= 65 && ascii <= 90) {
    std::cout << "Uppercase";
  }
  else if (ascii >= 97 && ascii <= 122) {
    std::cout << "Lowercase";
  }
  else {
    std::cout << "Please put alphabets";
  }
  
  std::cout << std::endl;
  return 0;
}
--
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./UpperCaseLowerCase.o 
Enter any alphabet: K
Uppercase

Weekdays.cpp

#include <iostream>
#include <string>
#include <vector>

int main() {

  int dayNum;
  
  std::cout << "Enter the week day number (1-7): ";
  std::cin >> dayNum;

  if (dayNum > 7) {
    std::cout << "Please enter a valid number.\n";
    main();
  }
  
  std::vector<std::string> daySet = {
    "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday",
    "Sunday"
  };

  std::cout << "The day is: " << daySet[dayNum-1] << std::endl;
  
  return 0;
}
      
  
--
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./Weekdays.o 
Enter the week day number (1-7): 6
The day is: Saturday

MonthDayNumber.cpp

#include <iostream>
#include <vector>

int main() {

  int month;
  
  std::cout << "Enter the number of the month: ";
  std::cin >> month;

  std::vector<int> monthSet =
    {
      31,28,31,30,31,30,31,31,30,31,30,31
    };

  std::cout << "The number of days in the month is: " << monthSet[month-1] << std::endl;
}
  
--
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./MonthDayNumber.o 
Enter the number of the month: 11
The number of days in the month is: 30

Denominations.cpp
#include <iostream>
#include <algorithm>
#include <vector>

int main() {

  int amt;
  int denomination;
  int res, change;
  
  std::cout << "Enter the amount: ";
  std::cin >> amt;

  std::cout << "Enter the denomination "
	    << std::endl
	    << "(5, 10, 20, 50, 100, 500, 2000) : ";
  
  std::cin >> denomination;
  
  std::vector<int>denominations
  { 5, 10, 20, 50, 100, 500, 2000 };
  
  if (!std::binary_search(denominations.begin(), denominations.end(), denomination)) {

    std::cout << "Enter an actual denomination from the list" << std::endl;
    main();
  }

  res = amt/denomination;
  change = amt % denomination;

  std::cout << "The number of " << denomination << " rupees note required is "
	    << res
	    << std::endl
	    << "And the change left is: " << change << std::endl;

  return 0;
}
--

dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./Denominations.o 
Enter the amount: 1000
Enter the denomination 
(5, 10, 20, 50, 100, 500, 2000) : 100
The number of 100 rupees note required is 10
And the change left is: 0

TriangleValidationWithSides.cpp

#include <iostream>

int main() {
  int a, b, c;

  std::cout << "Enter the sides of a triangle separated by spaces: ";
  std::cin >> a >> b >> c;
  
  if (a+b > c && a+c > b && b+c > a) {
    std::cout << "The sides form a triangle" << std::endl;
  }
  
  else
    std::cout << "The sides do not form a triangle." << std::endl;

  return 0;
}
--

dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./TriangleValidationWithSides.o 
Enter the sides of a triangle separated by spaces: 3 4 5
The sides form a triangle

TriangleValidationWithAngles.cpp

#include <iostream>

int main() {
  int a, b, c;

  std::cout << "Enter the angles of a triangle separated by spaces: ";
  std::cin >> a >> b >> c;
  
  if ((a+b+c) == 180) {
    std::cout << "The sides form a triangle" << std::endl;
  }
  
  else
    std::cout << "The sides do not form a triangle." << std::endl;

  return 0;
}

--
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ g++ TriangleValidationWithAngles.cpp -o TriangleValidationWithAngles.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./TriangleValidationWithAngles.o 
Enter the angles of a triangle separated by spaces: 90 45 45
The sides form a triangle

TriangleTypeFinder.cpp

#include <iostream>
#include <string>

int main() {
  int a, b, c;
  std::string type;
  
  std::cout << "Enter the sides of a triangle separated by spaces: ";
  std::cin >> a >> b >> c;

  type = "Scalene";
  

  if (a==b || b==c || c==a) {
    type = "Isosceles";
  }
  if ((a==b) && (b==c)) {
    type = "Equilateral";
  }

  std::cout << "It is a(n) " << type << " triangle" << std::endl;
  
  return 0;
}
--
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ g++ TriangleTypeFinder.cpp -o TriangleTypeFinder.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./TriangleTypeFinder.o
Enter the sides of a triangle separated by spaces: 7 7 7
It is a(n) Equilateral triangle

QuadraticRootFinder.cpp

#include <iostream>
#include <math.h>

int main() {

  int a, b, c;
  float discriminant, root1, root2;
  
  std::cout << "Quadratic equation: "
	    << "ax^2 + bx +c = 0"
	    << std::endl
	    << "Enter a, b, c separated by spaces: ";

  std::cin >> a >> b >> c;
  discriminant = b*b - 4*a*c;

  if (discriminant > 0) {
    root1 = ((0 - b) - sqrt(discriminant))/(2*a);
    root2 = ((0 - b) + sqrt(discriminant))/(2*a);
  }
  else if (discriminant == 0) {
    root1 =  ((0 - b) - sqrt(discriminant))/(2*a);
  }
  
  else if (discriminant < 0) {
    std::cout << "No real roots, please enter new values for a,b,c" << std::endl;
    main();
    return 0;
  }
    
  std::cout << " The roots are: " << root1 << "\t" << root2 << std::endl;

  return 0;
}
--

dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./QuadraticRootFinder.o 
Quadratic equation: ax^2 + bx +c = 0
Enter a, b, c separated by spaces: 12 7 12
No real roots, please enter new values for a,b,c
Quadratic equation: ax^2 + bx +c = 0
Enter a, b, c separated by spaces: 7 12 5
 The roots are: -1	-0.714286

ProfitAndLoss.cpp

#include <iostream>
#include <string>

int main() {

  float sellingPrice, costPrice, percentage;
  std::string outcome;
  
  std::cout << "Enter the selling price: ";
  std::cin >> sellingPrice;

  std::cout << "Enter the cost price: ";
  std::cin >> costPrice;

  outcome = "Null";
  percentage = 0;
  
  if (sellingPrice > costPrice) {

    outcome = "Profit";
    percentage = 100*(sellingPrice-costPrice)/costPrice;
    
  }

  else if (costPrice > sellingPrice) {

    outcome = "Loss";
    percentage = 100*(costPrice - sellingPrice)/sellingPrice;
  }

  std::cout << "The outcome is: " << outcome
	    << "The percentage of " << outcome
	    << " " <<  percentage << std::endl;

  return 0;
}
--

dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./ProfitAndLoss.o 
Enter the selling price: 1700
Enter the cost price: 1300
The outcome is: Profit.
The percentage of Profit 30.7692

PercentageGradeCalculator.cpp

#include <iostream>

const int MAX_MARKS = 100;

int main() {

  int grade;
  float marks[5], total, percentage;
  
  std::cout << "Enter your physics, chemistry, biology, mathematics and computer marks separated by spaces: ";

  std::cin >> marks[0] >> marks[1] >> marks[2] >> marks[3] >> marks[4];

  int i = 0;
  
  while (i <= 4) {

    if (marks[i] > MAX_MARKS) {
      std::cout << "Please enter valid marks (max. 100)";
      main();
      return 0;
    }

    total += marks[i];
    i++;
  }
  
  percentage = 100*total/500;

  grade = 72;
  int j = 40;

  if (percentage <= 40) {

    std::cout << "The percentage is " << percentage
	      << std::endl
	      << "The grade is F"
	      << std::endl;

    return 0;
  }
  
  while (j <= percentage) {

    grade--;
    j += 10;    
  }
  
  std::cout << "The percentage is " << percentage
	    << std::endl
	    << "The grade is " << (char)grade
	    << std::endl;
  
  return 0;
}
--
./PercentageGradeCalculator.o 
Enter your physics, chemistry, biology, mathematics and computer marks separated by spaces: 60 80 73 93 100
The percentage is 81.2
The grade is C

GrossSalaryCalculator.cpp

#include <iostream>

int main() {

  float basic, gross;
  float HRA = 0.3, DA = 0.95;
  
  std::cout << "Enter your basic salary: ";
  std::cin >> basic;

  if (basic <= 20000 ) {

    HRA -= 0.05;
    DA -= 0.05;
  }

  if (basic <= 10000) {

    HRA -= 0.05;
    DA -= 0.1;
  }

  gross = basic + basic*(HRA+DA);

  std::cout << "The gross is: "
	    << gross
	    << std::endl;
  return 0;
}
--

dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./GrossSalaryCalculator.o 
Enter your basic salary: 30000
The gross is: 67500

ElectricityBill.cpp

#include <iostream>

const float SLAB_1_UNIT = 0.5;

int main() {

  float slab = SLAB_1_UNIT, units , amt;
  
  std::cout << "Welcome to Energy Bill Calculator \n"
	    << "Enter the number of units consumed: ";
  std::cin >> units;
  
  if (units > 100) {
    slab += 0.25;
  }

  if (units > 200) {
    slab = 1.2;
  }
  else if (units > 250) {
    slab = 1.50;
  }

  amt = units * slab;
  amt += amt*0.20;
  
  std::cout << "Number of units consumed: "
	    << units << "\n"
	    << "Amount :" << amt << "\n";

  return 0;

}
  
--
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ g++ ElectricityBill.cpp -o ElectricityBill.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./ElectricityBill.o
Welcome to Energy Bill Calculator 
Enter the number of units consumed: 1000
Number of units consumed: 1000
Amount :1440

DaySelector.cpp

#include <iostream>

int main() {

  int dayNum;
  
  std::cout << "Enter the number of the day: ";
  std::cin >> dayNum;

  switch(dayNum) {

      case 1: {
	std::cout << "Monday";
	break;
      }
      case 2: {

	std::cout << "Tuesday";
	break;
      }
      case 3: {

	std::cout << "Wednesday";
	break;
      }
      case 4: {

	std::cout << "Thursday";
	break;
      }
      case 5: {

	std::cout << "Friday";
	break;
      }
      case 6: {
	std::cout << "Saturday";
	break;
      }
      default: std::cout << "Sunday";
  }

  std::cout << "\n";

  return 0;
}

--
./DaySelector.o 
Enter the number of the day: 6
Saturday

MaximumBetweenTwoNosUsingSwitch.cpp

#include <iostream>

int main() {

  float a, b, max;
  int res;
  std::cout << "Enter the two numbers separated by spaces: ";
  std::cin >> a >> b;

  res = a>b;
  
  switch (res) {
      case 1: {
	max = a;
	break;
      }
  }

  res = b > a;

  switch (res) {
      case 1: {
	max = b;
	break;
      }
  }

  res = a == b;
  
  switch (res) {
      case 1: {
	std::cout << "The numbers are equal";
	break;
	return 0;
      }
  }

  std::cout << "The largest number is: " << max << std::endl;
  return 0;
}

--
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ g++ MaximumBetweenTwoNosUsingSwitch.cpp -o MaximumBetweenTwoNosUsingSwitch.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./MaximumBetweenTwoNosUsingSwitch.o 
Enter the two numbers separated by spaces: 3 4
The largest number is: 4

EvenOrOddUsingSwitch.cpp

#include <iostream>
#include <string>

int main() {

  int num;
  std::string type;
  
  std::cout << "Enter the number: ";
  std::cin >>  num;

  int res = num % 2 ==0;
  switch(res) {

      case 0:
	  type = "Odd";
	  break;
	  
      case 1:
	  type = "Even";
	  break;
  }

  std::cout << "The number is: " << type << std::endl;

  return 0;
}
	  
--

dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ g++ EvenOrOddUsingSwitch.cpp -o EvenOrOddUsingSwitch.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./EvenOrOddUsingSwitch.o 
Enter the number: 3
The number is: Odd
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$

Calculator.cpp
#include <iostream>

int main() {

  int operation;
  float num1, num2, res;
  
  std::cout << "This is a very, very simple calculator\n"
	    << "What do you want to do?\n"
	    << "1. Addition\n"
	    << "2. Subtraction\n"
	    << "3. Multiplication\n"
	    << "4. Division\n"
	    << "Input: ";
    
  
  std::cin >> operation;

  std::cout << "Enter the numbers separated by spaces: ";

  std::cin >> num1 >> num2;
  
  switch (operation) {

      case 1: {
	res = num1 + num2;
	break;
      }
      case 2: {
	res = num1 - num2;
	break;
      }
      case 3: {
	res = num1 * num2;
	break;
      }
      case 4: {
	res = num1 / num2;
	break;
      }	
  }

  std::cout << res << "\n";
  return 0;
}
--
./Calculator.o 
This is a very, very simple calculator
What do you want to do?
1. Addition
2. Subtraction
3. Multiplication
4. Division
Input: 1
Enter the numbers separated by spaces: 2 3
5

PhoneCallBillGenerator.cpp

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main() {

  char dayChars[2];
  int time, duration;
  float rate, amt;
  
  std::cout << "Enter the day of the call: ";
  std::cin >> dayChars[0] >> dayChars[1];
  
  std::string day(dayChars);
  
  std::cout << "Enter the time of the call in 24 Hours: ";
  std::cin >> time;

  std::cout << "Enter the duration of the call: ";
  std::cin >> duration;

  // using transform() function and ::tolower in STL
  std::transform(day.begin(), day.end(), day.begin(), ::tolower);
  
  std::vector<std::string> workDays
  { "mo", "tu", "we", "th", "fr"};

  std::vector<std::string> weekends
  { "su", "sa"};

  
  if ((std::find(workDays.begin(), workDays.end(), day) != workDays.end())) {

    if (time >= 800 && time <= 1800) {
      rate = 0.40;
    }
    else {
      rate = 0.25;
    }
  }
  else if ((std::find(weekends.begin(), weekends.end(), day) != weekends.end())) {

    rate = 0.15;
  }

  else {

    std::cout << "Enter a valid day" << std::endl;
    main();
    return 0;
  }

  
  amt = rate * duration;

  std::cout << "Your bill is: $" << amt << std::endl;
  
  return 0;
}
--
./PhoneCallBillGenerator.o 
Enter the day of the call: Mo
Enter the time of the call in 24 Hours: 1700
Enter the duration of the call: 32
Your bill is: $12.8

LoanInterest.cpp

#include<iostream>
using namespace std;

int main()
{
  float loanAmt,amt, interest;

  cout<<"Enter the loan amount: ";
  cin>>loanAmt;

  cout<<"enter the rate of interest: ";
  cin>>interest;

  int sum=0, i, j, count=0;

  amt = loanAmt/20;

  int l;
  l=loanAmt;

  while(loanAmt>0)
    {
      i = ((interest/100)*loanAmt)/12;
      sum += i;
      j = amt - i;
      loanAmt -= j;
      count++;

    }
  float f,m,o ;

  f = count/12;
  m = sum/f;
  o = (m/l)*100;

  cout<<"The total interest: "<< sum;
  cout<<"The annualized interest percentage: "<< o;

  return 0;

}
--
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ g++ LoanInterest.cpp -o LoanInterest.o
dedipyaman@2D:~/Code/college/Fall-17/CSE/CPP/Classwork$ ./LoanInterest.o 
Enter the loan amount: 1000
enter the rate of interest: 8
The total interest: 66The annualized interest percentage: 6.6