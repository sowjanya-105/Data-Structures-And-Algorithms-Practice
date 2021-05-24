#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int arr[10],i,n,sum=0;
	
	cout<<"\n size of array: ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
	cout<<"\n Ele in array "<<(i+1)<<" : ";
	cin>>arr[i];
	}
	
	for(i=0;i<n;i++)
	{
      sum = sum + (arr[i]*arr[i]);
	}
	cout<<"sum is "<<sum;

	return 0;	
}
