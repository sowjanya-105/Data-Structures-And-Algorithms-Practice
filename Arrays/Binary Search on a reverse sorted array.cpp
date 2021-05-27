#include<iostream>
using namespace std;

int ReverseBinarySearch(int arr[],int n,int x)
{
     int l=0;
    int r=n;
 if(l<=r)
 {
 	int mid = l + (r-l)/2;
 	
 	if(arr[mid]==x)
 	return mid;
 	
 	else if(x<arr[mid])
 	l=mid+1;
 	
 	else
 	r=mid-1;
	 }
	 return -1;	
}

int main()
{
	int arr[]={10,9,8,7,6,5,4,3,2,1};
	int n= sizeof(arr)/sizeof(arr[0]);
	int x=5;
	int result = ReverseBinarySearch(arr,n,x);
	
	cout<<"\nElement present at index "<<result;
	return 0;
	
}
