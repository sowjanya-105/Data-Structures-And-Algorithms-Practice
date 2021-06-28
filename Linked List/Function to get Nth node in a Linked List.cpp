#include<iostream>
#include<assert.h>
using namespace std;

struct Node{
	int data;
	struct Node *next;
}*first=NULL;

void create(int A[], int n)
{
	int i;
	struct Node *t, *last;
	
	first = new Node;
	first->data=A[0];
	first->next=NULL;
	last=first;
	
	for(i=1;i<n;i++)
	{
	t=new Node;
	t->data=A[i];
	t->next=NULL;
	last->next=t;
	last=t;
	}
}

int GetNthNode(Node *p,int index)
{
	Node *current=p;
	
	int count=0;
	
	while(current!=NULL)
	{
		if(count==index)
		return (current->data);
		count++;
		current=current->next;
	}
	assert(0);
}

int main()
{
	int A[]={3,5,7,10,15,8,12,20};
	create(A,8);
	cout<<"element at index 1 is "<<GetNthNode(first,1);
	return 0;
}
