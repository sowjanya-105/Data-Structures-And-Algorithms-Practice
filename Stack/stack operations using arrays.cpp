#include<iostream>
using namespace std;
#define MAX 3
int push(int st[],int val);
int pop(int st[]);
int peek(int st[]);
int display(int st[]);

int main(int argc,char *argv[])
{
	int val,option;
	do
	{
		cout<<"\n <<< MAIN MENU >>>";
		cout<<"\n 1. PUSH";
		cout<<"\n 2. POP";
		cout<<"\n 3. PEEK";
		cout<<"\n 4. DISPLAY";
		cout<<"\n 5. EXIT";
		cout<<"\n\n Enter your Option: ";
		cin>>option;
		switch(option)
		{
			case 1:
				cout<<"\nEnter the no. to be pushed on stack: ";
				cin>>val;
				push(s,val);
				break;
				
				case 2:
					val=pop(st);
					if(val!=-1)
					cout<<"\n The value deleted from stack is: "<<val;
					break;
					
					case 3:
						val=peek(st);
						if(val!=-1)
						cout<<"\n The value stored at top of stack is: "<<val;
						break;
						
						case 4:
							display(st);
							break;
							
		}
		
	}while(option!=5);
	 return 0;
}

int push(int st[],int val)
{
	if(top==MAX-1)
	{
		cout<<"\nStack Overflow";
	}
	else
	{
		top++;
		st[top]=val;
	}
}

int pop(int st[])
{
	int val;
	if(top==-1)
	{
		cout<<"\n Stack Underflow";
		return -1;
	}
	else 
	{
		val=st[top];
		top--;
		return val;
	}
}

int display(int st[])
{
	int i;
	if(top==-1)
	cout<<"\n Stack is empty";
	else
	{
		for(i=top;i>=0;i--)
		cout<<"\n"<<st[i];
		cout<<"\n";
	}
}

int peek(int st[])
{
	if(top==-1)
	{
		cout<<"\n Stack is empty";
		return -1;
	}
	else
	return (st[top]);
}
