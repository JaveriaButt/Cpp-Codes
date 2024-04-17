/*
Write a Program that inputs a value and type of conversion. The Program
should then output the value after conversion. the program should include
the following conversions: 

1 inch = 2.54 centimeters
1 gallon = 3.785 liters
1 mile = 1.609 Kilometers
1 pound = 0.4536 Kilograms
*/
#include<iostream>
using namespace std;
int main()
{
	int type;
	float value;
	cout<<"Chose any one for conversion : \n";
	cout<<"1- Centimeters \n";
	cout<<"2- Liters \n";
	cout<<"3- Kilometers \n";
	cout<<"4- KiloGrams\n";
	cin>>type;
	cout<<"\nEnter Value : ";
	cin>>value;
	cout<<"\n";
	switch(type)
	{
		case 1:
			cout<<value <<" inches = "<<value*2.54<<" cm ";
			break;
		case 2:
			cout<<value <<" gallon = "<<value*3.785<<" liters ";
			break;
		case 3:
			cout<<value <<" miles = "<<value*1.609<<" km ";
			break;
		case 4:
			cout<<value <<" pounds = "<<value*0.4536<<" kg ";
			break;
		default :
			cout<<" Invalid Conversion :(";
	}
}










