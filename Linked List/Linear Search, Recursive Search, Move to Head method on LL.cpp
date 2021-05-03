#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
}*first=NULL;

void create(int A[],int n)
{
 int i;
 struct Node *t, *last;
 first=(struct Node *)malloc(sizeof(struct Node));	
 first->data = A[0];
 first->next = NULL;
 last=first;
 
 for(i=1;i<n;i++)
 {
 	t=(struct Node*)malloc(sizeof(struct Node));
 	t->data=A[i];
 	t->next = NULL;
 	last->next = t;
 	last = t;
 }
}

void Display(struct Node *p)
{
	while(p!=NULL)
	{
		printf("%d ", p->data);
		p=p->next;
	}
		printf("\n");
}


struct Node *LSearch(struct Node *p,int key)//LInear Search
{
	while(p!=NULL)
	{
		if(key==p->data)
		return p;
		p=p->next;
	}
	return NULL;
}

struct Node *HSearch(struct Node *p,int key)//Move to Head Method Search
{
	struct Node *q;
	while(p!=NULL)
	{
		if(key==p->data)
		{
			q->next = p->next;
			p->next=first;
			first=p;
			return p;
		}
		q=p;
		p=p->next;
	}
	return NULL;
}

struct Node *RSearch(struct Node *p,int key) //Recursive Search
{
	if(p==NULL)
	return NULL;
	if(key==p->data)
	return p;
	
	return RSearch(p->next,key);
}


int main() //driver code
{
	struct Node *temp;
	int A[]={3,5,7,10,15,8,12,20};
	create(A,8);
	temp = HSearch(first,7);
	temp = HSearch(first,8);
	if(temp)
	printf("Key is found at %d\n",temp->data);
	else
	printf("Key not found");
	
	Display(first);
	return 0;
}
