#include <iostream>

using namespace std;

void rotate(int arr[],int n)
{
    int x=arr[n-1],i;
    for(i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=x;
    
}

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}




int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n= sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    cout<<endl;
    rotate(arr,n);
    printArray(arr,n);
    return 0;
}
