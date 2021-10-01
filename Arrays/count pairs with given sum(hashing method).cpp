#include <bits/stdc++.h>
using namespace std;

int PairsCount(int arr[],int n,int sum)
{
	unordered_map<int,int> m;
	
	for(int i=0;i<n;i++)
	m[arr[i]]++;
	
	int t_cnt=0;
	
	for(int i=0;i<n;i++)
	{
		t_cnt +=m[sum=arr[i]];
		if(sum-arr[i]==arr[i])
		t_cnt--;
	}
	return t_cnt/2;
}
int main()
{
    int arr[] = { 1, 5, 7, -1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 6;
    cout << "Count of pairs is "
         << PairsCount(arr, n, sum);
    return 0;
}

