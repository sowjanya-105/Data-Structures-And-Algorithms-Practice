/* Calculate sum of first n natural no's 
as n*(n+1)/2.Find sum of all array elements and subtract
it from sum of first n numbers. It will be
the value of missing element.
TC: O(n)as only one traversal of array
SC: O(1)as no extra space is required
*/
#include<iostream>
using namespace std;

int getMiss(int a[], int n)
{
	int total=(n+1)*(n+2)/2;
	for(int i=0;i<n;i++)
	total-=a[i];
	return total;
}

int main()
{
	int a[]={1,2,4,5,6,7,8};
	int n= sizeof(a)/sizeof(a[0]);
	int missing=getMiss(a,n);
	cout<<missing;
	return 0;
}
