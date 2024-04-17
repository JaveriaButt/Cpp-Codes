/*
Write a program that returns the sum of 1st n numbers where n is a number entered by user. 
Use while loop to perform this task
E.g n=10
Result=55
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	//input value of n upto which we have to calculate sum
	cout<<"Enter Value of n : ";
	cin>>n;
	int i=1;//this is used to sum the values..
	int sum=0;//this variable will contain sum of 1st n numbers
	while(i<=n)//condition 
	{
		sum=sum+i;
		i++;
	}
	cout<<"\nSum of 1st "<<n<<" Numbers is : "<<sum;
}
