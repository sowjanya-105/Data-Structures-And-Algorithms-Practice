#include<iostream>
using namespace std;

bool triplet(int arr[],int n,int sum)
{
	int l,r;
	
	for(int i=0;i<n-2;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				if(arr[i]+arr[j]+arr[k]==sum)
				{
					cout<<"The triplet is "<<arr[i]<<","<<arr[j]
					<<","<<arr[k];
					return true;
				}
			}
		}
	}
	return false;
}

int main()
{
	int arr[] = { 1, 4, 45, 6, 10, 8 };
    int sum = 22;
    int n = sizeof(arr) / sizeof(arr[0]);
    triplet(arr,n,sum);
    return 0;
}
