/*
Write a program that ask the user total marks and obtained marks.
calculate the percentage and then display the grade according to this.
if obt_m > ttl_m invalid
else if p>80 A
else if p>70 B
else if >60 C
else if >55 D
else if >50 E
else if<50 F
*/
#include<iostream>
using namespace std;
int main()
{
	//variables required
	float obt_m , ttl_m,perc;
	char grade;
	//input total marks and obtained marks
	cout<<"Enter Total Marks : ";
	cin>>ttl_m;
	cout<<"\nEnter Obtained Marks : ";
	cin>>obt_m;
	//calculating percentage
	perc=(obt_m/ttl_m)*100;
	//checking conditions.. 
	if(obt_m>ttl_m)
		{ cout<<"\nInvalid Input "; return 0;}
	else if(perc>=80)
		grade='A';
	else if(perc>=70)
		grade = 'B';
	else if(perc>=60)
		grade='C';
	else if(perc>=55)
		grade = 'D';
	else if(perc>=50)
		grade='E';
	else if(perc<50)
		grade = 'F';
	//printing grade
	cout<<"\nYour Grade is : "<<grade;
	cout<<"\nYour Percentage is : "<<perc;
	
}








