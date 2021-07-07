#include<iostream>
#include<string.h>
#include<malloc.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
}*top=NULL;

void push(int x)
{
	struct Node *t;
	t=new Node;
	
	if(t==NULL)
	cout<<"stack is full \n";
	else
	{
		t->data = x;
		t->next=top;
		top=t;
	}
}

int pop()
{
	struct Node *t;
	int x=-1;
	
	if(top==NULL)
	cout<<"stack is empty\n";
	else
	{
	 t=top;
	 top=top->next;
	 x=t->data;
	 free(t);	
	}
	return x;
}

void Display()
{
	struct Node *p;
	p=top;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<"\n";
}

int pre(char x)
{
	if(x=='+' ||x=='-')
	return 1;
	else if(x=='*' ||x=='/')
	return 2;
	else 
	return 0;	
}

int isOperand(char x)
{
	if(x=='+' || x=='-'||x=='*' ||x=='/')
	return 0;
	else
	return 1;
}

char *InToPost(char *infix)
{
	int i=0,j=0;
	char *postfix;
	int len = strlen(infix);
	postfix=(char *)malloc((len+2)*sizeof(char));
	
	while(infix[i]!='\0')
	{
		if(isOperand(infix[i]))
		postfix[j++]=infix[i++];
		else
		{
			if(pre(infix[i])>pre(top->data))
			push(infix[i++]);
			else
			{
				postfix[j++]=pop();
			}
			
		}
	}
	while(top!=NULL)
	postfix[j++]=pop();
	postfix[j]='\0';
}

int main()
{
	char *infix="a+b*c";
	push('#');
	char *postfix=InToPost(infix);
	cout<<postfix;
	return 0;
}
