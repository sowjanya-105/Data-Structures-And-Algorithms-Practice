#include<iostream>
#include<stdlib.h>
#include<malloc.h>
using namespace std;

struct stack
{
	int data;
	struct stack *next;
};

struct stack *top = NULL;
struct stack *push(struct stack*,int val);
struct stack *display(struct stack*);
struct stack *pop(struct stack*);
int peek(struct stack*);

int main(int argc, char *argv[])
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
				top=push(top,val);
				break;
				
				case 2:
					top=pop(top);
					break;
					
					case 3:
						val=peek(top);
						if(val!=-1)
						cout<<"\n The value stored at top of stack is: "<<val;
						break;
						
						case 4:
							display(top);
							break;
							
		}
		
	}while(option!=5);
	 return 0;
}

struct stack *push(struct stack*,int val)
{
	struct stack *ptr;
	ptr = (struct stack*)malloc(sizeof(struct stack));
	ptr->data = val;
	if(top==NULL)
	{
		ptr->next = NULL;
		top=ptr;
	}
	else
	{
		ptr->next = top;
		top=ptr;
	}
	return top;
}

struct stack *display(struct stack *top)
{
	struct stack *ptr;
	ptr=top;
	if(top==NULL)
	cout<<"\nStack is empty";
	else
	{
		while(ptr!=NULL)
		{
			cout<<"\n"<<ptr->data;
			ptr=ptr->next;
		}
	}return top;
}

struct stack *pop(struct stack *top)
{
	struct stack *ptr;
	ptr=top;
	if(top==NULL)
	cout<<"\nStack is empty";
	else
	{
		top = top->next;
		cout<<"\nThe value to be deleted is: "<<ptr->data;
		free(ptr);
	}return top;	
}

int peek(struct stack *top)
{
	if(top==NULL)
	return -1;
	else
	return top->data;
}
