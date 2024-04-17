/*
Write a program that Accepts a character from user and checks if
it is a lower case or not. If it is a lower case then print the 
message “ You Entered Lower Case Character”
Else “You didn’t Entered Lower case Letter”
*/
#include<iostream>
using namespace std;
int main()
{
	//variable required character type
	char ch;
	//input value
	cout<<"Enter any Alphabet : ";
	cin>>ch;
	//conditions to check if it is lower case of not
	if(ch>=97 && ch <=122)//ascii codes of lower case alphabets range from 97 to 122
	{
		cout<<"\nYou entered Lower case Character \n";
	}
	else
	{
		cout<<"\nYou Didn't Entered Lower Case Letter\n";
	}
}
