/*
Write a program that ask the user to enter  values of two matrices and display the sum of 
those two matrices. For that purpose size of both matrices must be same.
*/
#include<iostream>
using namespace std;
int main()
{
	int c,r;
	cout<<"No. of Rows : ";
	cin>>r;
	cout<<"No. of Cols : ";
	cin>>c;
	int m1[r][c],m2[r][c];
	cout<<"Enter Values in Matrix 1 \n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			cin>>m1[i][j];
		cout<<endl;
	}
	cout<<"Enter Values in Matrix 2 \n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			cin>>m2[i][j];
		cout<<endl;
	}
	//adding both matrices and printing result 
	int res[r][c];
	cout<<"Result is \n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			res[i][j]=m1[i][j]+m2[i][j];
			cout<<res[i][j]<<"   ";
		}
		cout<<endl;
	}







}
