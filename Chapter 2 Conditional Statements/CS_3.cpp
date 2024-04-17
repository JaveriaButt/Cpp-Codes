/*
Write a program that takes 3 numbers a,b,c as input from the user 
and if a is not equal to zero then check if a is the common divisor
of b and c or not.
Common Divisor: means b and c both are divisible by a
*/
#include<iostream>
using namespace std;
int main()
{
	//input three variables a,b,c;
	int a,b,c;
	cout<<"Enter Three Numbers : \n";
	cin>>a>>b>>c;
	//conditions to check if a is zero or not
	if(a==0)
	{
		cout<<"a is zero ";
	}
	else
	{
		//if a is not zero we have to check if b and c are divisibe by a or not
		//for that purpose once again conditions
		if(b%a==0 && c%a==0)
		//if a number is divisible by other then it means it's
		//remainder is zero % operator returns the remainder
			cout<<"\na is common divisor of b and c";
		else 
			cout<<"\na is not common divisor of b and c";
	}
}







