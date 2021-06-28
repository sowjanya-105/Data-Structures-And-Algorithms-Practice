#include<iostream>
using namespace std;

struct Node {
	int data;
	struct Node *next;
}*first=NULL;

void create(int A[],int n)
{
	int i;
	struct Node *t, *last;
	
	first = new Node;
	first->data=A[0];
	first->next=NULL;
	last=first;
	
	for(int i=1;i<n;i++)
	{
		t=new Node;
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}

void search(struct Node *p, int x)
{
	Node* current = p;
	if(current!=NULL)
	{
		if(current->data==x)
		cout<<"found";
	}
	else
	cout<<"Not found";
}

int main()
{
	int A[]={3,5,7,10,15,8,12,20};
	create(A,8);
	search(first,3);
	return 0;
}

