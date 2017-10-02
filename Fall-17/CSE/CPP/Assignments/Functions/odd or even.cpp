#include<iostream>
using namespace std;
int odd_even(int);
int main(){
	int a;
	cout<<"enter a number and see if it's odd or even ";
	cin>>a;
	odd_even(a);	
	}
int odd_even(int c){
    if(c%2==0){
    	cout<<"even";
	}
	else{
		cout<<"odd";
	}
}
