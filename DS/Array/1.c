#include <stdio.h>
#include <stdlib.h>
void Display();
void InsertFirst();
void InsertLast();
int Count_Node();

struct node
{
	int data;
	struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;

PNODE head=NULL;

int main()
{
 	int choice;
 	while(1)
 	{
 		puts("\n**MENU**");
 		puts("1. Display");
 		puts("2. Count Node");
 		puts("3. Insert First");
 		puts("4. Insert Last");
 		puts("100. Exit");
 		puts("*END LIST*\n");
 		
 		printf("Enter Your Choice= ");
 		scanf("%d",&choice);
 		int cnt=0;
 		
switch(choice)
 		{
 			case 1:
 				Display();
 				break;
 			case 2:
 				
 				cnt = Count_Node();
 				printf("Total Nodes = %d\n",cnt);
 				break;
 			case 3:
 				InsertFirst();
 				break;
 			case 4:
 				InsertLast();
 				break;
 			case 100:
 				return 0;
 			default:
 				printf("Invalid Choice\n");
		}
	}
	return 0;
}

void Display()
{	
	PNODE temp = head;
	if(head == NULL) 	
	{ 		
		printf("List is Empty");
	} 	
	else 	
	{ 	
		while(temp!=NULL)
		{
			printf("%d->",temp->data);
			temp = temp->next;
}		 
	} 	
	
	return;
}

void InsertFirst()
{
	PNODE ptr = NULL;
	//PNODE temp = head;
	int value = 0;
	
	ptr = (PNODE)malloc(sizeof(NODE));
	
	printf("Enter Value= ");
	scanf("%d",&value);		
	
	ptr->data = value;
	ptr->next = NULL;
	
	if(head==NULL)
	{
		head = ptr;
	}
	else
	{
		ptr->next = head;
		head = ptr;
	}	
	return;
}

void InsertLast()
{
	PNODE ptr = NULL;
	PNODE temp = head;
	int value = 0;
	
	ptr = (PNODE)malloc(sizeof(NODE));
	
	printf("Enter Value= ");
	scanf("%d",&value);		
	
	ptr->data = value;
	ptr->next = NULL;
	
	if(head==NULL)
	{
		head = ptr;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp = temp->next;
		}
		temp->next = ptr;
	}
	return;
}
int Count_Node()
{
	int cnt=0;
	PNODE temp = head;

	if(head==NULL)
	{
		return cnt;
	}
	else
	{
		while(temp!=NULL)
		{
			cnt++;
			temp = temp->next;
		}
		return cnt;
	}
}

