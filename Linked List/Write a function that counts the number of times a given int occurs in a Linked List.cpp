#include<iostream>
using namespace std;

struct Node {
	int data;
	struct Node *next;
}*first=NULL;

int frequency = 0;

void create(int A[],int n)
{
	int i;
    struct Node *t,*last;
    
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;
   
   for(int i=0;i<n;i++)
   { 
    t=new Node;
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
	}
}

int count(struct Node *p,int x)
{
	if(p==NULL)
	return frequency;
	if(p->data==x)
	frequency++;
	return count(p->next,x);
}

int main()
{
	int A[]={2,5,6,7,5,9,12,15};
	create(A,8);
	cout<<"Count of 5 is "<<count(first,5);
	return 0;
}
