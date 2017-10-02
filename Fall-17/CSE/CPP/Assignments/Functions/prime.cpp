#include<iostream>
using namespace std;
int prime(int,int);
int main(){
	int a,b;
	cout<<"enter a range and get all prime numbers in it\n";
	cin>>a>>b;
	prime(a,b);	
	}
	
int prime(int c, int d){
 int i,flag;
 
    while (c < d)
    {
        flag = 0;

        for(i = 2; i <= c/2; ++i)
        {
            if(c % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << c << " ";

        ++c;
    }

    return 0;
}

