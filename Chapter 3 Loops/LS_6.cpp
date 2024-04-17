/*
A program that ask the user to enter any character.. If the user enter something else the alphabets
and numbers the program should terminate. 
Display the total numbers , lowercase letters and upper case letters entered by user. 
Use do while loop.
isalnum(int n);
*/
#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
	char ch;
	int is_l=0,is_u=0,is_d=0;
	do
	{
		cout<<"Enter Any character : ";
		cin>>ch;
		if(islower(ch))//this function is used to check if the character is lower case or not
			is_l++;
		else if(isupper(ch))//this function checks if the character is upper case or not
			is_u++;
		else if(isdigit(ch))//this function checks if the character is a digit of not
			is_d++;
		
	}while(isalnum(ch));
	//isalnum is a builin function comes under the header file ctype
	//this function returns true if the character passed is alphabet of number otherwise false;
	cout<<"\nLower Case : "<<is_l;
	cout<<"\n\nUpper Case : "<<is_u;
	cout<<"\n\nDigit      : "<<is_d;
	
	
	
	
	
	
	
	
	
	
}
