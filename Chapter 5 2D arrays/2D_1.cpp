/*
Write a Program that ask user to Enter Size of Matrix. And then Enter Values and Display 
Transpose of that Matrix
size : r=2 , c=3 
1 2 3
4 5 6    
..transpose...
1  4
2  5
3  6
*/
#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"Enter Number of Rows : ";
	cin>>r;
	cout<<"Enter Number of Columns : ";
	cin>>c;
	//declaring 2D array of that size
	int arr[r][c];
	//declaring another array of opposite size for saving transpose 
	int tr[c][r];
	//taking input in 2D array using nested for loop
	cout<<"Enter Values (press tab to enter value in next Column and Press Enter to move to next row)";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			cin>> arr[i][j];
		cout<<endl;
	}
	cout<<"Original Matrix \n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			cout<< arr[i][j]<<"   ";
		cout<<endl;
	}
	cout<<"Transpose of Matrix \n";
	//saving traspose 
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			tr[j][i]=arr[i][j];
	}
	//printing transpose now
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
			cout<< tr[i][j]<<"   ";
		cout<<endl;
	}
}











