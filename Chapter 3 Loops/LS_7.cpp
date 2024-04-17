/*
Write a program that prints factorial of a number entered by user
using while and for loop
*/
#include<iostream>
using namespace std;
int main()
{
	int n,f=1;
	cout<<"Enter Number : ";
	cin>>n;
	//using for loop
	for(int i=1;i<=n;i++)
		f=f*i;
	cout<<"\nFactorial using for loop : "<<f<<endl;
	f=1;
	int i=1;
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	cout<<"\nFactorial using While Loop : "<<f;
}

