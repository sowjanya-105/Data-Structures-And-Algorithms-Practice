#include<iostream>
using namespace std;

int BinarySearch(int arr[],int l,int r,int x)
{
	if(r>=l)
	{	
	int mid = l+ (r-l)/2;
	
	if(arr[mid]==x)
		return mid;
		else if(arr[mid]>x)
		return BinarySearch(arr,l,mid-1,x);
		else
		return BinarySearch(arr,mid+1,r,x);
	}
	return -1;
}

int main()
{
	int arr[]={10,20,30,40,50,60,70};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x=10;
	int res = BinarySearch(arr,0,n-1,x);
	if(res==-1)
	cout<<"\nElement not present in array";
	else
	cout<<"\nElement present at index "<<res;
	return 0;
}
