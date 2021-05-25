#include<iostream>
using namespace std;

int getMin(int arr[],int n)
{
	int res=arr[0];
	for(int i=0;i<n;i++)
	res=min(res,arr[i]);
	return res;
}

int getMax(int arr[],int n)
{
	int res=arr[0];
	for(int i=0;i<n;i++)
	res=max(res,arr[i]);
	return res;
}

void RangeandCoeffOfRange(int arr[],int n)
{
	int min = getMin(arr,n);
	int max = getMax(arr,n);
	float range = max-min;
	float CoeffOfRange=range / (max + min);
	cout<<"\nRange: "<<range;
	cout<<"\nCoeff. Of Range: "<<CoeffOfRange;
}

int main()
{
	int arr[] = { 5, 10, 15 };
    int n = sizeof(arr) / sizeof(arr[0]);
    RangeandCoeffOfRange(arr, n);
    return 0;
}
