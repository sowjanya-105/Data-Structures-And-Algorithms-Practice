#include<iostream>
#include<malloc.h>
using namespace std;

class twoStacks {
	int * arr;
	int size;
	int top1,top2;

public:
	twoStacks(int n)
	{
		size=n;
		arr= new int[n];
		top1=-1;
		top2=size;
	}

void push1(int x)
{
	if(top1<top2-1)
	{
		top1++;
		arr[top1]=x;
	}
	else
	{
		cout<<"Stack Overflow\n";
		exit(1);
	}
}

void push2(int x)
{
	if(top1<top2-1)
	{
		top2--;
		arr[top2]=x;
	}
	else {
		cout<<"Stack Overflow\n";
		exit(1);
	}
}

int pop1()
{
	if(top1>=0) {
		int x = arr[top1];
		top1--;
		return x;
	}
	else {
		cout<<"Stack Underflow\n";
		exit(1);
	}
}

int pop2()
{
	if(top2<size)
	{
		int x=arr[top2];
		top2++;
		return x;
	}
	else
	{
		cout<<"Stack Underflow\n";
		exit(1);
	}
}

};

int main()
{
twoStacks s(5);
s.push1(10);
s.push2(20);
s.push1(15);
s.push2(25);
s.push2(30);

cout<<"\nPopped element from Stack 1 is "<<s.pop1();
s.push2(40);
cout<<"\nPopped element from Stack 2 is "<<s.pop2();
return 0;	
}
