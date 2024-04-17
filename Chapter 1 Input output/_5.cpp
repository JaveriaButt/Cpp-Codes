/*
Write a Program that takes age in years and displays age in months and days
1 year = 12 months
1 year= 365 days
*/
#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter Your age in Years : ";
	cin>>age;
	int months,days;
	months=age*12;
	days=age*365;
	cout<<"\nYour Age in Months : "<<months<<endl;
	cout<<"\nYour Age in Days : "<<days<<endl;
	return 0;
}
