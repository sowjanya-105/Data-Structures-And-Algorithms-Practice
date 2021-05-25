#include<iostream>
using namespace std;

void findPair(int arr[],int n,int sum)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i;j<n;j++)
		if(arr[i]+arr[j]==sum)
		{
			cout<<"\nPair found at ("<<arr[i]<<","<<arr[j]<<")";
			return;
		}
	}
	cout<<"\nPair not found";
}

int main()
{
	int arr[]={2,3,4,5,6,7,8};
	int n= sizeof(arr)/sizeof(arr[0]);
	int sum=7;
	findPair(arr,n,sum);
	return 0;
}
