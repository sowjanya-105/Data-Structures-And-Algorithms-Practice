#include <iostream>
using namespace std;

int FirstOccurrence(int arr[],int n, int x)
{
	int low=0;
	int high=n-1;
	int res=-1;
	
	while(low<=high)
	{
		int mid= low + (high-low)/2;
	
		if(arr[mid]>x)
		high=mid-1;
		
		else if(arr[mid]<x)
		low=mid+1;
	
		else
		{
			res=mid;
			high=mid-1;
		}
	}
return res;
}


int LastOccurrence(int arr[],int n, int x)
{
	int low=0;
	int high=n-1;
	int res=-1;
	
	while(low<=high)
	{
		int mid= low + (high-low)/2;
	
		if(x<arr[mid])
		high=mid-1;
		
		else if(x>arr[mid])
		low=mid+1;
	
		else
		{
			res=mid;
			low=mid+1;
		}
	}
		return res;
}




int main()
{
	int arr[]={2,3,4,5,5,5,5,6,7,8};
	int n= sizeof(arr)/sizeof(int);
	
	int x=5;
	cout<<"\nFirst Occurrence is "<<FirstOccurrence(arr,n,x);
	cout<<"\nLast Occurrence is "<<LastOccurrence(arr,n,x);
	
	return 0;
}
