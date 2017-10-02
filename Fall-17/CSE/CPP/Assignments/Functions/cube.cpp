#include<iostream>
using namespace std;
int cube(int);
int main(){
	int a,b;
	cout<<"enter a number and get its cube ";
	cin>>a;
	b=cube(a);	
	cout<<b;
	}
int cube(int c){
	int d;
	d=c*c*c;
	return d;
}
