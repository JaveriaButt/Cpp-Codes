/*
Write a program to find sum of following series using for loop 
1!+2!+3!+4!+….+n!
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Number : ";
	cin>>n;
	long int sum=0;
	for(int i=1;i<=n;i++)
	{
		int f=1;
		for(int j=1;j<=i;j++)
			f=f*j;
		sum+=f;
	}
	cout<<"\nSum : "<<sum<<endl;
	//let n=5
	/* 1!=1
	2!=2
	3!=6
	4!=24
	5!=120
	1+2+6+24+120=153
	*/
}




