#include<iostream>
using namespace std;

int countPrimes(int n)
{
	vector<bool> prime(n,true);
	prime[0]=false;
	prime[1]=true;
	
	for(int i=0;i<sqrt(n);++i)
	{
		if(prime[i])
		{
			for(int j=i*i; j<n;j+=i)
			{
				prime[j]=false;
			}
		}
	}
	return count(prime.begin(), prime.end(), true);
}

int main()
{
	int n=27;
	cout<<countPrimes(n);
	return 0;
}
