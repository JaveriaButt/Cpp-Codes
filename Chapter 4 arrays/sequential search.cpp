#include<iostream>
using namespace std;
int main()
{
	int n,x;
	cout<<"Enter Size of Array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter The Numbers : ";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"Enter Number to Search : ";
	cin>>x;
	for(int i=0;i<=n;i++)
	{
		if(arr[i]==x)
		{
			cout<<"Number Found At position : "<<i+1<<endl;
			return 0;
		}
	}
	cout<<"Number Not Found ";
}
