/*
Write a program that ask the user to enter two numbers and the operator. 
If the user enter + then sum two numbers and print result. If user
enter – then subtract and print result. User can enter +,-,*,/,% .
Use switch statement
*/
#include<iostream>
using namespace std;
int main()
{
	//two numbers required
	float n1,n2;
	//input operator save it in character
	char op;
	cout<<"Enter Two Numbers : \n";
	cin>>n1>>n2;
	cout<<"Enter Operator (+,-,*,/,%) : ";
	cin>>op;
	switch(op)
	{
		case '+':
			cout<<endl<<n1<<" + "<<n2<<" = "<<n1+n2;
			break;
		case '-':
			cout<<endl<<n1<<" - "<<n2<<" = "<<n1-n2;
			break;
		case '*':
			cout<<endl<<n1<<" * "<<n2<<" = "<<n1*n2;
			break;
		case '/':
			cout<<endl<<n1<<" / "<<n2<<" = "<<n1/n2;
			break;
		case '%'://it can't be applied on float type so type casting
			cout<<endl<<int(n1)<<" % "<<int(n2)<<" = "<<int(n1)%int(n2);
			break;
		default:
			cout<<"\nInvalid Operator :( ";	
	}
}





