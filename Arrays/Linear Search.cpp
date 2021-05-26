#include<iostream>
using namespace std;

int Search(int arr[],int x,int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		return i;
	}
	return -1;
}

int main()
{
	int arr[]={2,3,4,5,6,7,8,9};
	int x=1;
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int result = Search(arr,x,n);
	if(result==-1)
	cout<<"\nElement not found in the array";
	else
	cout<<"\nElement found at index "<<result;
	return 0;
}
