/*
Write a program That ask the user to enter two matrices and display the product of those two matrices.
make Sure that the Size of Matrix satisfy the condition for multiplication
i.e number of columns of 1st matrix = number of rows of 2nd matrix
*/
#include<iostream>
using namespace std;
int main()
{
	//variables for matrix 1 
	int r1,c1;
	int r2,c2;
	do
	{
	system("cls");
	cout<<"No. of Cols of Matrix 1 should be equal to No. Of Rows of Matrix 2 For Multiplication\n\n";
	cout<<"Enter Size of Matrix 1 : \n";
	cout<<"Rows : ";cin>>r1;
	cout<<"Cols : ";cin>>c1;
	//variables for matrix 2

	cout<<"Enter Size of Matrix 2 : \n";
	cout<<"Rows : ";cin>>r2;
	cout<<"Cols : ";cin>>c2;
	}
	while(r2!=c1);
	int m1[r1][c1],m2[r2][c2];
	cout<<"Enter Values in Matrix 1 \n";
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
			cin>>m1[i][j];
		cout<<endl;
	}
		cout<<"Enter Values in Matrix 2 \n";
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
			cin>>m2[i][j];
		cout<<endl;
	}
	int res[r1][c2];
	//calculating result of multiplication of 2 matrices 
	//before statring the main work 1st iitialize the resultant array with 0..
	for(int i=0;i<r1;i++)
	for(int j=0;j<c2;j++)
	res[i][j]=0;
	//main work
	for(int k=0;k<r1;k++)
	{
		for(int i=0;i<c2;i++)
			for(int j=0;j<c1;j++)
				res[k][i]+=m1[k][j]*m2[j][i];
	}
	//printing resultant matrix 
	cout<<"Product of these two matrices is \n";
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
			cout<<res[i][j]<<"\t";
		cout<<endl;
	}
}








