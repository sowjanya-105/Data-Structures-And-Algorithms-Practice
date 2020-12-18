#include<iostream>
#include<stdlib.h>
using namespace std;
#define size 5
void insertion_sort(int arr[],int n)

int main()
{
	int arr[size], i, n;
	cout<<"\n Enter the no. of elements in the array: ";
	cin>>n;
		cout<<"\n Enter the elements: ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	insertion_sort(arr,n);
	cout<<"\n The sorted array is: \n";
	cout<<arr[i]<<"\t";
	return 0;
}
void insertion_sort(int arr[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(temp<arr[j] && (j>=0))
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
}
