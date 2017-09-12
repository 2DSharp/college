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
