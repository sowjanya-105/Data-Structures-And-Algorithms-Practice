#include<iostream>
using namespace std;
#define MAX 10
int front=-1, rear=-1;
int insert(void);
int del_ele(void);
int peek(void);
int display(void);

int main()
{
	int val,option;
	do
	{
		cout<<"\n <<< MAIN MENU >>>";
		cout<<"\n 1. INSERT";
		cout<<"\n 2. DELETE";
		cout<<"\n 3. PEEK";
		cout<<"\n 4. DISPLAY";
		cout<<"\n 5. EXIT";
		cout<<"\n\n Enter your Option: ";
		cin>>option;
		switch(option)
		{
			case 1:
				insert();
				break;
				
				case 2:
					val=del_ele();
					if(val!=-1)
					cout<<"\n The value deleted is: "<<val;
					break;
					
					case 3:
						val=peek();
						if(val!=-1)
						cout<<"\n The value stored first is: "<<val;
						break;
						
						case 4:
							display();
							break;
							
		}
		
	}while(option!=5);
	 return 0;
}

int insert()
{
	int num;
	cout<<"\n Enter the no. to be inserted in queue: ";
	cin>>num;
	if(rear=MAX-1)
	cout<<"\n Overflow..";
	else if(front==-1 && rear==-1)
	front=rear=0;
	else
	rear++;
	queue[rear]=num;
}

int del_ele()
{
	int val;
	if(front==-1 || front>rear)
	{
		cout<<"\nUnderflow";
		return -1;
	}
	else
	{
		val=queue[front];
		front++;
		if(front>rear)
		front=rear=-1;
		return val;
	}
}

int peek()
{
if(front==-1 || front>rear)
	{
		cout<<"\nUnderflow";
		return -1;
	}
	else
	{
		return queue[front];
		}	
}

int display()
{
	int i;
	cout<<"\n";
	if(front==-1 || front>rear)
	{
		cout<<"\nUnderflow";
		return -1;
	}
	else
	{
		for(i=front;i<=rear;i++)
		cout<<"\t"<<queue[i];
	}
}
