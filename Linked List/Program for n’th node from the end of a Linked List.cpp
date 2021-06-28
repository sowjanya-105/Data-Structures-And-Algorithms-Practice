#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
}*first=NULL;

void create(int A[], int n)
{
	int i;
	struct Node *t,*last;
	
	first= new Node;
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

void NthFromLast(struct Node *p,int n)
{
	struct Node *m=p;//main ptr
	struct Node *r=p;//reference ptr
	
	int count=0;
	
	if(p!=NULL)
	{
		while(count<n)
		{
			if(r==NULL)
			{
			cout<<n<<" is greater than the no. of nodes in list\n";
			return;
			}
		r=r->next;
		count++;
		}
		if(r==NULL)
		{
		 p=p->next;
		 cout<<"Node no. "<<n<<" from last is "<<m->data;	
		}
		else
		{
			while(r!=NULL)
			{
				m=m->next;
				r=r->next;
			}
			cout<<"Node no. "<<n<<" from last is "<<m->data;	
		}
	}
}

int main()
{
	int A[]={3,5,7,10,15,8,12,20};
	create(A,8);
	NthFromLast(first,1);
	return 0;
}

