#include<iostream>
using namespace std;

bool findXinK(int arr[],int n,int x,int k)
{
	int i,j;
	
	for(i=0;i<n;i=k+1)
	{
		for(j=0;j<k;j++)
		{
			if(arr[i+j]==x)
			break;
		}
		if(j==k)
		return false;
	}
	if(i==n)
	return true;

	for (j=i-k; j<n; j++)
      if (arr[j] == x)
          break;
    if (j == n)
       return false; 
      
    return true;
    
}

int main()
{
	int arr[]={3, 5, 2, 4, 9, 3, 1, 7, 3, 11, 12, 3};
	int x=3,k=3;
	int n = sizeof(arr)/sizeof(arr[0]);
	if(findXinK(arr,n,x,k))
	cout<<"\nYes";
	else
	cout<<"\nNo";
	return 0;
}
