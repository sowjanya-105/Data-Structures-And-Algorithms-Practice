#include<iostream>
using namespace std;

int CountPair(int arr[], int n,int sum)
{
	int count=0;
	
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(arr[i]+arr[j]==sum)
			count++;
				return count;
			

}

int main()
{
	int arr[]={ 1, 5, 7, -1, 5 };
	int n= sizeof(arr)/sizeof(arr[0]);
	int sum=6;

	cout<<"\nThe count of pairs is "<<CountPair(arr,n,sum);
	return 0;
}
