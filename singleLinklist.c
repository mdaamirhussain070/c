#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node 
{
	int data;
	struct node *next;
};
struct node *create_list(struct node *start);
struct node *addatend(struct node *start,int );
void display(struct node *start);
struct node *addatbeg(struct node *start,int data);
int main()
{	
	int data;
	struct node *start=NULL;
	int choice;
	while(1)
	{
		printf("1   ----------------Create link List\n");
		printf("2   ----------------Display link list List\n");
		
		printf("Enter Your Choice\n");
		scanf("%d",&choice);
		
		
		switch(choice){
			case 1: 
			start=create_list(start);
			break;
		case 2:
			display(start);
			break;
		case 3:
			printf("Enter data To add at begining of list \n");
			scanf("%d",&data);
			start=addatbeg(start,data);
			break;
		case 4:
			printf("Enter data To add at end  of list \n");
			scanf("%d",&data);
			start=addatend(start,data);
			break;
		default :
			exit(1);
			
		}
	}
return 0;
}
	
struct node *create_list(struct node *start){
	int n,data;
//	struct node *temp;
	start=NULL;
	printf("Enter number of node\n");
	scanf("%d",&n);
	if(n==0)
		return start;
	printf("Enter data\n");
	scanf("%d",&data);
	start=addatbeg(start,data);
	for(int i=2;i<=n;i++)
	{
		printf("Enter data to inser at end\n");
		scanf("%d",&data);
		start=addatend(start,data);
	}
	return start;
}	
struct node *addatend(struct node *start,int data){
	struct node *p,*temp;
	p=start;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
//	temp->next=NULL;
	p->next=temp;
	temp->next=NULL;
	
	return start;
}

struct node *addatbeg(struct node *start,int data){
	 struct node *temp;
	 temp=(struct node*)malloc(sizeof(struct node));
	 temp->data=data;
	 temp->next=NULL;
	 if(start==NULL)
	 {
		 start=temp;
	 }
	 temp->next=start;
	 start=temp;
	 return start;

	 
}	 
void display(struct node *start)
{
	struct node *p;
	p=start;
	while(p->next!=NULL)
	{
		printf("%d",p->data);
		p=p->next;
	}
}
		