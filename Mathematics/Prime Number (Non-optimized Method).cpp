// <Print Prime Number>
// IDEA:
// check for numbers from 2 to n-1, if the number is 
// divisible by i, its not a prime no. since prime no. is div.
//only by itself.
// TIME COMPLEXITY: O(n)


#include<iostream>
using namespace std;

bool isPrime(int n)
{
	if(n==1)
	return false;
	
	for(int i=2; i<n;i++)
	{
		if(n%i==0)
		return false;
		
		return true;
	}
}

int main()
{
	int n=7;
	cout<<isPrime();
	return 0;
}
