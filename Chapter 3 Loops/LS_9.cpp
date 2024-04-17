/*
Write a Program to find all the divisors of a number entered by user. 
E.g 
N= 32
1,2,4,8,16
N=50
2,5,10,25
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Number : ";
	cin>>n;
	cout<<"All The Divisors of "<<n<<" : ";
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
			cout<<i<<" , ";
	}
}
