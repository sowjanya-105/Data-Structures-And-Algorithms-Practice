#include<iostream>
using namespace std;

int frequency(int arr[], int n,int x)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		count++;
	}
	return count;
}

int main()
{
	int arr[]={0, 5, 5, 5, 4};
    int x = 5;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << frequency(arr, n, x);
    return 0;
}
