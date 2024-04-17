/*
Write a Program that takes a 4 digit number as input from the user.. 
And displays the digits separated.. E.g. if user enter 2341
Output should be
2,3,4,1 
Also Find Sum of Digits 
E.g sum=2+3+4+1=10
*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter 4 Digit Number : ";
	cin>>num;
	int d1,d2,d3,d4;
	d1=num/1000;
	num=num%1000;
	d2=num/100;
	num=num%100;
	d3=num/10;
	num=num%10;
	d4=num;
	cout<<"\n\n"<<d1<<" , "<<d2<<" , "<<d3<<" , "<<d4<<"\n\n";
	return 0;
}














