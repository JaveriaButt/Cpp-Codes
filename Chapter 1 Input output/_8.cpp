/*
Write a Program that Takes Temperature in Celsius from user
 and Displays the Temperature in Fahrenheit and Kalvin.
K= C+273 
F= (9/5C+32)
*/
#include<iostream>
using namespace std;
int main()
{
	//input variable
	float c;
	cout<<"Enter Temperature in Celsius : ";
	cin>>c;
	//output variables 
	float k,f;
	k=c+273.0;
	f=(9.0/5.0)*c+32;
	cout<<"\nTemperature in Kalvin : "<<k<<endl;
	cout<<"\nTemperature in Fahrenheit : "<<f<<endl;
	return 0;
}
