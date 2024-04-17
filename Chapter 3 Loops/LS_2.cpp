/*
Write a program that ask the user to enter two numbers and print the 1st ten terms of Fibonacci
series using while loop.
FIBONACCI SERIES ARE THE SERIES IN WHICH EVERY TERM IS THE SUM OF PREVIOUS TWO TERMS
for that purpose 1st two terms or considered 1,1 or entered by user
*/
#include<iostream>
using namespace std;
int main()
{
	//1st two terms
	int n1,n2;
	cout<<"Enter 1st two terms of Fibonacci series : ";
	cin>>n1>>n2;
	//third term
	int n3;
	cout<<n1<<" , "<<n2;//printing 1st two terms seperately while others will be printing using
	//loop
	int i=3;//we already have 1st 2 terms and total we have to print 10 thats why loop will 
	//start from 3
	while(i<=10)
	{
		n3=n1+n2;//current term is sum of previous two
		// and then updating last two values in n1,n2
		n1=n2;
		n2=n3;
		cout<<" , "<<n3;
		i++;
	}
}









