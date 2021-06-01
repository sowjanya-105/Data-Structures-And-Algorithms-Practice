#include<iostream>
using namespace std;

int CountRotate(int arr[],int start,int end)
{
	while(start<=end)
	{
		int mid=start +(end-start)/2;
		
	if (mid < end && arr[mid+1] < arr[mid])
       return (mid+1);
 
    if (mid > start && arr[mid] < arr[mid - 1])
       return mid;
 

    if (arr[end] > arr[mid])
       return countRotate(arr,start,mid-1);
 
    return countRotate(arr,mid+1,end);
		
	}
}

int main()
{
	int arr[] = {15, 18, 2, 3, 6, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << countRotate(arr, 0, n-1);
    return 0;
}
