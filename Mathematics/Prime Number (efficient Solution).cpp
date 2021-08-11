/*
<Check For Prime Number>

IDEA:
Divisors always appear in pair.
ex: 25-(1,25),(5,5)

If(x,y) is a pair,
x*y=n

and if x<=y,
x*x<=n
x<= sqrt(n)

So, start from 2 till sqrt(n), if divisor 
is found it's not a prime no.

TIME COMPLEXITY: O(sqrt n)
 */
 
#include<iostream>
using namespace std;
 bool isPrime(int n)
 {
 	if(n==1)
 	return false;
 	
 	for(int i=2;i*i<=n;i++)
 	if(n%i==0)
 	return false;
 	return true;
 }
 
 int main()
{
	int n=7;
	cout<<isPrime(n);
	return 0;
}
 
