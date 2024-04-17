#include<iostream>
using namespace std;
int main()
{
	int s1,s2,j;
	cout<<"\nEnter Size of Set A : ";
	cin>>s1;
	int A[s1];
	cout<<"\nEnter Elements in Set A : ";
	for(int i=0;i<s1;i++)
		cin>>A[i];
	cout<<"\nEnter Size of Set B : ";
	cin>>s2;
	int B[s2];
	cout<<"Enter Elements in Set B : ";
	for(int i=0;i<s2;i++)
		cin>>B[i];	
	int U[s1+s2];
	for(int i=0;i<s1;i++)
		U[i]=A[i];
	int k=s1;
	for(int i=0;i<s2;i++)
	{
		int c=1;
		for(int j=0;j<s1;j++)
		{
			if(B[i]==A[j])
			{
				c=0;
				break;
			}
		}
		if(c==1)
		{
			U[k]=B[i];
			k++;
		}
		
	}
	cout<<"\nUnion of Set A and B : ";
	for(int i=0;i<k;i++)	
		cout<<U[i]<<" ";
}
