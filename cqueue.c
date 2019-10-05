#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5

void insert();
void display();
void delete();
int front=-1;
int rear=-1; 
//int size=5;
int arr[max];
void main()
{
	int choice;
	
	while(1)
	{
		printf("Enter 1 to insert element\n");
		printf("Enter 2 to display element in cqueue\n");
		printf("Enter 3 to delete element\n");
		
		printf("press 5 to exit\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: insert();
						break;
						
			case 2:
					display();
					break;
			case 3: delete();
					break;
					
			case 5:
					exit(1);
			
			default:
					printf("Invalid choice\n");
		}
	}
	getch();
}

void insert()
{
	printf("front= %d\n  rear= %d\n",front,rear);
	int ele;
	printf("Enter element \n");
		scanf("%d",&ele);
	if(front==rear+1|| rear==max-1)
	{
			printf("CQueue is full\n");
			printf("front= %d\n  rear= %d\n",front,rear);
	}
	else if(front ==-1 && rear==-1)
	{
		front=0;
		rear=0;
		arr[rear]=ele;
		printf("front= %d\n  rear= %d\n",front,rear);
	}
	else if(rear==max-1)
	{
		rear=0;
		arr[rear]=ele;
		printf("front= %d\n  rear= %d\n",front,rear);
	}
	else
	{
		rear++;
		arr[rear]=ele;
		printf("front= %d\n  rear= %d\n",front,rear);
	}
}

void display()
{
	int i;
	
	printf("Circular queue is:\n");
	
	i=front;
	if(front<=rear)
	{
		while(i<=rear)
		{
			printf("%d",arr[i]);
			i++;
			printf("front= %d\n  rear= %d\n",front,rear);
		}
	}
	else
	{
		while(i<=max-1)
		{
			printf("%d",arr[i]);
			i++;
			printf("front= %d\n  rear= %d\n",front,rear);
		}
		i=0;
		while(i<=rear)
		{
			printf("%d",arr[i]);
			i++;
			printf("front= %d\n  rear= %d\n",front,rear);
		}
	}
	printf("\n");
}
void delete()
{
	int ele;
	if(front==-1 && rear==-1)
	{
		printf("cque is empty\n");
		printf("front= %d\n  rear= %d\n",front,rear);
	}
	else if(front==rear)
	{
		ele=arr[front];
		printf("deleted element : %d\n",ele);
		front=rear=-1;
		printf("front= %d\n  rear= %d\n",front,rear);
	}
	else if(front==max-1)
	{
		ele=arr[front];
		printf("deleted element is: %d\n",ele);
		front=0;
		printf("front= %d\n  rear= %d\n",front,rear);
	}
	else
	{
		ele=arr[front];
		printf("deleted element is : %d\n",ele);
		front++;
		printf("front= %d\n  rear= %d\n",front,rear);
	}
	printf("\n");
}