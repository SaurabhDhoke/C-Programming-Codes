#include<stdio.h>
#include<stdlib.h>
void CreateList(); //Prototype
void DisplayList();
struct node        //Node Structure
{	
	int data;
	struct node* next;
};

struct node* head = NULL;  //Head Pointer

int main()
{
	int num = 0;
	printf("How many node you want to insert = ");
	scanf("%d",&num);
	
	for(int i=0;i<num;i++)
	{
		CreateList();
	}
	DisplayList();
	return 0;
}

void CreateList()
{
	struct node* ptr  = NULL;
	struct node* temp = head;
	int value = 0;
	
	ptr = (struct node*)malloc(sizeof(struct node)); 
	
	printf("Enter Value = ");
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

void DisplayList()
{
	struct node* temp = head;
	
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
