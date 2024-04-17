/*
Write a program to display sum of following series. The value of x and n is entered by user. 
 x^1+n^2+x^3+...x^n;
 2*1+2^2+2^3+2^4 //let n=4 and x=2;
 2+4+8+16=30;
Use for loop
*/
#include<iostream>
#include<cmath>//we need this header file to calculate power of x
using namespace std;
int main()
{
	int x,n;
	cout<<"Enter Value of X : ";
	cin>>x;
	cout<<"Enter Value of n : ";
	cin>>n;
	long int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum+ pow(x,i);
	}
	cout<<"Sum is : "<<sum;
}
