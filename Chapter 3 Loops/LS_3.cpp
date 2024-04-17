/*
Write a program That ask the user to enter a number and print all the prime numbers 
less then that number using for loop.
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Number : ";
	cin>>n;
	int c;
	cout<<"\nList of Prime Numbers Less then "<<n<<" : ";
	for(int i=2;i<n;i++)
	{
		c=1;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				c=0;
				break;
			}
		}
		if(c==1)
		cout<<i<<" , ";
	}
}





