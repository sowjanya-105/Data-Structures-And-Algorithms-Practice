#include<iostream>
#define m 4
#define n 4
using namespace std;

void row_sum(int arr[m][n])
{
	int i,j,sum=0;
	
	for(i=0;i<m;++i)
     {
		for(j=0;j<n;++j)
		sum = sum + arr[i][j];
	cout<<"\nSum of the row "<<i<<" is "<<sum;
	sum=0;
	}
	cout<<"\n\n\n";
}

void col_sum(int arr[m][n])
{
	int i,j,sum=0;
	
	for(i=0;i<m;++i)
     {
		for(j=0;j<n;++j)
		sum = sum + arr[j][i];
	cout<<"\nSum of the column "<<i<<" is "<<sum;
	sum=0;
	}
}

int main()
{
	int i,j;
	int arr[m][n];
	
	int x=1;
	for(i=0; i<m;i++)
		for(j=0;i<n;j++)
           arr[i][j]=x++;
           
           row_sum(arr);
           col_sum(arr);
return 0;
}
