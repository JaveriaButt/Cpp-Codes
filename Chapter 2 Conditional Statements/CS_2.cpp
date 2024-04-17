/*
Write a program that ask the user to enter a number and check if
it is positive, negative or zero
*/
#include<iostream>
using namespace std;
int main()
{
	//input variable int type
	int n;
	//taking input
	cout<<"Enter Value : ";
	cin>>n;
	//conditions 
	if(n<0)
		cout<<"\nNumber is Negative \n";
	else if(n>0)
		cout<<"\nNumber is Positive \n";
	else
		cout<<"\nNumber is equal to zero";
}
