/* 
<Count Digits>
IDEA:
Remove all the digits one by one from
the last (it's easy to remove from last)
using x/10 and increment the result.
TIME COMPLEXITY: O(n) 
*/

#include<iostream>
using namespace std;

int CountDigits(int x)
{
	int res=0;
	while(x>0)
	{
		x=x/10; 
		res++;
	}
	return res;
}

int main()
{
	int x=8970;
	cout<<CountDigits(x);
	return 0;
}
