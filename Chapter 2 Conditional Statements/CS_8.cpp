/*
Write a program that ask the user to choose the vehicle for the parking and 
number of days and then display the total charges..
Menu 
C --> Car                  1 day charge = 30 Rs
M --> Motorcycle           1 Day charge = 20Rs 
B --> Bus		           1 day charge = 40Rs
*/
#include<iostream>
using namespace std;
int main()
{
	//variables required 2
	char v;//type of vehicle
	int days;//number of days 
	cout<<"Choose the Vehicle for which You Need Parking Space : ";
	cout<<"\nC --> Car                  1 day charge = 30 Rs";
	cout<<"\nM --> Motorcycle           1 Day charge = 20Rs ";
	cout<<"\nB --> Bus                  1 day charge = 40Rs\n";
	cin>>v;
	cout<<"Number of Days : ";
	cin>>days;
	switch(v)
	{
		case 'C':
			cout<<"Your Total Bill for "<<days<<" Days is : "<<days*30;
			break;
		case 'M':
			cout<<"Your Total Bill for "<<days<<" Days is : "<<days*20;
			break;
		case 'B':
			cout<<"Your Total Bill for "<<days<<" Days is : "<<days*40;
			break;
		default:
			cout<<"Invalid Input : ";
	}
}







