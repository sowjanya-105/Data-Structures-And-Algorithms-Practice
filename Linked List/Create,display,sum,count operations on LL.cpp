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

void RDisplay(struct Node *p) //Recursive Display
{
	if(p!=NULL)
	{
		printf("%d ", p->data);
		RDisplay(p->next);
	}
}

int count(struct Node *p)
{
	int l=0;
	while(p) //means p!=0
	{
		l++;
		p=p->next;
	}
	return l;
}

int Rcount(struct Node *p)//Recursive solution to count
{
	if(p!=NULL)
	return Rcount(p->next)+1;
	else
	return 0;
}

int sum(struct Node *p)
{
	int s=0;
	
	while(p!=NULL)
	{
		s+=p->data;
		p=p->next;
	}
	return s;
}

int Rsum(struct Node *p)
{
	if(p==NULL)
	return 0;
	else
	return Rsum(p->next)+p->data;
}

int Max(struct Node *p)
{
	int max=-32767;
	
	while(p)
	{
		if(p->data>max)
		max =p->data;
		p=p->next;
	}
	return max;
}

int RMax(struct Node *p)
{
	int x=0;
	
	if(p==0)
	return -32767;
	
	x=RMax(p->next);
	if(x>p->data)
	return x;
	
	else 
	 return p->data;
}

int Min(struct Node* p)
{

    int min = 32767;

    while (p != NULL) 
	{
        if (p->data<min)
            min = p->data;
        else
          p= p->next;
    }
    return min;
}


int RMin(struct Node *p)
{
	int x=0;
	
	if(p==0)
	return 32767;
	
	x=RMin(p->next);
	if(x<p->data)
	return x;
	
	else 
	 return p->data;
}


int main()
{
	int A[]={3,5,7,10,15,8,12,20};
	create(A,8);
	Display(first);
	RDisplay(first);
	printf("\nLength is %d ", count(first));
	printf("\nLength is %d ", Rcount(first));
	printf("\nSum is %d",sum(first));
	printf("\nSum is %d",Rsum(first));
	printf("\nMax is %d",Max(first));
	printf("\nRMax is %d",RMax(first));
	printf("\nMin is %d",Min(first));
	printf("\nRMin is %d",Min(first));
	return 0;
}
