/*
Write a Program that Takes input From user and displays
square and cube of that number.
 Use both methods..
Without using pow function, 
Using power function
*/
#include<iostream>
#include<math.h>
//this header file contains all functions of mathematics..
//e.g cos,sin,tan,sqrt,power,exp,etc
using namespace std;
int main()
{
	//declare variable
	double n;
	//taking input
	cout<<"Enter Number : ";
	cin>>n;
	//find cube and square without using pow function 
	double sq,cube;
	sq=n*n;
	cube=n*n*n;
	cout<<"\nSquare of "<<n<<" is "<<sq<<endl;
	cout<<"\nCube of "<<n<<" is "<<cube<<endl;
	cout<<"\n---------using Builtin Function---------"<<endl;
	//pow(number,power)
	//this function accepts two parameters.. one is number and the 2nd is its
	//power
	sq=pow(n,2);
	cube=pow(n,3);
	cout<<"\nSquare of "<<n<<" is "<<sq<<endl;
	cout<<"\nCube of "<<n<<" is "<<cube<<endl;
	return 0;
}













