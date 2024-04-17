/*
Write a program to find sum of digits of a number using while loop
1256 
Sum=14
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Number : ";
	cin>>n;
	int sum=0;
	while(n%10!=0)
	{
		sum+=n%10;
		n=n/10;
	}
	cout<<"\nSum of Digits "<<sum;
}
