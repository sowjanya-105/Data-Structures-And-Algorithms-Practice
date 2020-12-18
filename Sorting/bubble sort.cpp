#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int i,n,temp,j,arr[10];
	cout<<"\nEnter the no. of elements: ";
	cin>>n;
		cout<<"\n Enter the elements: ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	cout<<"\nThe array sorted in ascending order: \n";
	for(i=0;i<n;i++)
	cout<<arr[i]<<"\t";
	return 0;
}
