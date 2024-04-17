/*
Write a program to print table of a number entered by user using do while loop.
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Number : ";
	cin>>n;
	int i=1;
	do
	{
		cout<<n<<" * "<<i<<" = "<<n*i<<endl;
		i++;
	}
	while(i<=10);
}




