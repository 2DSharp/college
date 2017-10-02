#include<iostream>
using namespace std;
int swap (int, int);
int main(){
	int a, b;
	cout<<"enter two numbers\n";
	cin>>a>>b;
    swap(a,b);	
}
int swap (int a, int b){
	a=a+b;
	b=b-a;
	a=((a-b)/2);
	cout<<a<<endl;
	cout<<b*-1;
}
