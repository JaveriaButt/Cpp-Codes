/*
Write a program that ask the user to enter their salary. If the salary 
is greater then 50,000 then deduct 20% tax. If 30,000 or above then deduct 
15% tax. If below 30,000 deduct 10% tax. And at the end display the total salary..
Tax on it. And the remaining salary after tax deduction.
*/
#include<iostream>
using namespace std;
int main()
{
	//variables
	int salary;
	float tax;
	//input
	cout<<"Enter Your Salary : ";
	cin>>salary;
	//condition to calculate tax
	if(salary>50000)
	{
		tax=(salary/100)*20;
	}
	else if(salary>30000)
	{
		tax=(salary/100)*15;
	}
	else 
	{
		tax=(salary/100)*10;
	}
	cout<<"\nTotal Salary : "<<salary;
	cout<<"\n\nTax : "<<tax;
	cout<<"\n\nRemaining Salary : "<<salary-tax;
	return 0;
}





