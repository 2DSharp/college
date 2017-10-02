#include<iostream>
using namespace std;
int factorial(int);
int main(){
int a;
cout<<"enter how many terms do you want ";
cin>>a;
factorial(a);	
}
int factorial(int a){
	int i=1,s=1,f=1;
	while(i<=a-1)
	{
		f=f*i;
		s=s+f;
		i++;
	}
	cout<<s;
}
