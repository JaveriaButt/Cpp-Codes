/*
A program to check whether a character is VOWEL or CONSONANT using switch.
*/
#include<iostream>
using namespace std;
int main()
{
	//input a character 
	char ch;
	cout<<"Enter Any Alphabet : ";
	cin>>ch;
	switch(ch)
	{
		case 'A':
		case 'a':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			cout<<"\nVowel ";
			break;
		default:
			cout<<"\nConsonant ";
	}
}
