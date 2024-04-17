/*
Write a Program to find our area of triangle when three sides a,b,c are given. 
The value of a, b and c is taken as input from user..
The formula to find area of triangle using it’s side is:
A=(s(s-a)(s-b)(s-c))^1/2
Where s=(a+b+c)/2
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	//variables required for this program
	float a,b,c,s;
	//taking a,b,c as input
	cout<<"\nEnter Value of a : ";
	cin>>a;
	cout<<"\nEnter Value of b : ";
	cin>>b;
	cout<<"\nEnter Value of c : ";
	cin>>c;
	//calcualting value of s
	s=(a+b+c)/2.0;
	//now to Area of triangle we need to take square root 
	//for that purpose we will use header file math.h
	//ups a is already declared... capital A is saving the value of s*(s-a)*(s-b)*(s-c);
	//while small a is representing one of the side
	float A=s*(s-a)*(s-b)*(s-c);
	//function to find square root is sqrt(number)
	cout<<"\n\tArea of Triangle is : "<<sqrt(A);
}




















