/*
Write a program that ask the user to select the shape whose are they want
to find and then find the area of the shape selected by the user… ask the
user to enter 1 for Circle,2 for triangle 3 for square. 
*/
#include<iostream>
using namespace std;
int main()
{
	int ch;
	cout<<"Select Shape \n\n";
	cout<<"1- Circle \n";
	cout<<"2- Triangle \n";
	cout<<"3- Square ";
	cin>>ch;
	switch(ch)
	{
		//for circle
		case 1:
			float rc;//radius of circle
			cout<<"\n\tEnter Radius : ";
			cin>>rc;
			cout<<"\nArea of Circle with Radius "<<rc<<" = "<<3.1416*rc*rc;
			break;
		//for triangle
		case 2:
			float ht,wt;//hieght and width;
			cout<<"\n\tEnter Height and width : ";
			cin>>ht>>wt;
			cout<<"\nArea of Triangle is "<<0.5*ht*wt;
			break;
		//for square
		case 3:
			float ls;//length
			cout<<"\n\tEnter Length : ";
			cin>>ls;
			cout<<"\nArea of Square with Length "<<ls<<" = "<<ls*ls;
			break;
		default:
			cout<<"Invalid Choice ";
	}
}







