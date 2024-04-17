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
	int I[s1];
	int k=0;
	for(int i=0;i<s1;i++)
	{
		for(int j=0;j<s2;j++)
		{
			if(A[i]==B[j])
			{
				I[k]=A[i];
				k++;
				break;
			}
		}
	}
	cout<<"Intersection of Set A and B : ";
	for(int i=0;i<k;i++)	
		cout<<I[i]<<" ";
}
