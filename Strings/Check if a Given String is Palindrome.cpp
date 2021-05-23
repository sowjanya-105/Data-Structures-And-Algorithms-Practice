#include<iostream>
#include<string.h>

using namespace std;

void isPalindrome(char str[])
{
	int low=0;
	int high=strlen(str)-1;
	
	while(high>1)
	{
		if(str[low++]!=str[high--])
		{
		cout<<str<<" is Not a pallindrome\n";
		return;
	}
	}
	cout<<str<<" is a palindrome\n";
}
int main()
{
	isPalindrome("abba");
	isPalindrome("abca");
	return 0;
}
