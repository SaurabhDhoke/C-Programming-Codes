//Singly Linear Linked List

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void Insert_First();
void Insert_Between();
void Insert_Last();
void Delete_First();
void Delete_Between();
void Delete_Last();
void Delete_All();
void Display();
int Count();
void Search();

int main()
{
    int choice,ret=0;
    while(1)
    {
        puts("\n\t\t           **MENU**\n");
        puts("\t1.Insert_First    2.Insert_Between    3.Insert_Last");
        puts("\t4.Delete_First    5.Delete_Between    6.Delete_Last");
        puts("\t7.Delete_All      8.Display           9.Count");
        puts("\t10.Search         11.Exit");
        puts("--------------------------------------------------------------------------------");

        printf("Enter Choice= ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            Insert_First();
            break;
        case 2:
            Insert_Between();
            break;
        case 3:
            Insert_Last();
            break;
        case 4:
            Delete_First();
            break;
        case 5:
            Delete_Between();
            break;
        case 6:
            Delete_Last();
            break;
        case 7:
            Delete_All();
            break;
        case 8:
            Display();
            break;
        case 9:
            ret =Count();
            printf("Total number of Node is %d.\n",ret);
            break;
        case 10:
            Search();
            break;
        case 11:
            return 0;
        default:
            printf("Invalid Input..!\n");
            break;
        }
    }
    return 0;
}

void Insert_First()
{
    int value=0;
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));

    if(ptr==NULL)
    {
        printf("Memory Allocation Failled..!\n");
        return;
    }

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

void Insert_Between()
{
    int pos,value=0;
    struct node *ptr = NULL;
    struct node *temp = head;
    ptr = (struct node*)malloc(sizeof(struct node));

    if(ptr==NULL)
    {
        printf("Memory Allocation Failed\n");
        return;
    }

    printf("Enter Position= ");
    scanf("%d",&pos);

    if(pos<1 || pos>Count()+1)
    {
        printf("Invalid Position!\n");
        return;
    }

    printf("Enter Value= ");
    scanf("%d",&value);

    ptr->data = value;
    ptr->next = NULL;

    if(pos==1)
    {
        if(head==NULL)
        {
            head = ptr;
        }
        else
        {
            ptr->next=head;
            head=ptr;
        }
    }
    else if(pos==Count()+1)
    {
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next=ptr;
    }
    else
    {
        while(pos>2)
        {
            temp=temp->next;
            pos--;
        }
        ptr->next=temp->next;
        temp->next = ptr;
    }
    return;
}

void Insert_Last()
{
    struct node* ptr = NULL;
    struct node* temp = head;
    int value = 0;

    ptr = (struct node*)malloc(sizeof(struct node));

    if(ptr==NULL)
    {
        printf("Memory allocation failed..!\n");
        return;
    }

    printf("Enter Value = ");
    scanf("%d",&value);

    ptr->data = value;
    ptr->next = NULL;

    if(head==NULL)                         //Scenario 1st...if list is empyt
    {
        head = ptr;
    }
    else                                //Scenario 2nd...if 1 or more than 1 node
    {
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
    }
    return;
}

void Delete_First()
{
    struct node *temp=head;
    if(temp==NULL)                                // scenario 1st...if List is Empty
    {
        printf("List is Already Empty!\n");
    }
    else if(temp->next==NULL)                    //Scenario 2nd...only 1 node preaent
    {
        head=NULL;
        free(temp);
    }
    else                                        //Scenario 3rd...if more than 1 node
    {
        head=head->next;
        free(temp);
    }
    return;
}

void Delete_Between()
{
    struct node *ptr = NULL;
    struct node *temp = head;
    struct node *temp1 = NULL;

    int pos=0;
    ptr = (struct node*)malloc(sizeof(struct node));

    if(ptr==NULL)
    {
        printf("Memory Allocation Failed\n");
        return;
    }

    printf("Enter Position= ");
    scanf("%d",&pos);

    if(pos<1 || pos>Count()+1)
    {
        printf("Invalid Position!\n");
        return;
    }

    if(pos==1)
    {
        if(temp==NULL)                                // scenario 1st...if List is Empty
        {
            printf("List is Already Empty!\n");
        }
        else if(temp->next==NULL)                    //Scenario 2nd...only 1 node preaent
        {
            head=NULL;
            free(temp);
        }
        else                                        //Scenario 3rd...if more than 1 node
        {
            head=head->next;
            free(temp);
        }
    }
    else if(pos==Count())
    {
        while(temp->next->next!=NULL)        //Scenario 3rd...if more than 1 node
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }
    else
    {
        while(pos>=2)
        {
            temp1 = temp;
            temp = temp->next;
            pos--;
        }
        temp1->next = temp->next;
        free(temp);
    }
    return;
}

void Delete_Last()
{
    struct node *temp=head;
    if(temp==NULL)                            // scenario 1st...if List is Empty
    {
        printf("List is Already Empty!\n");
    }
    else if(temp->next==NULL)                //Scenario 2nd...only 1 node preaent
    {
        head=NULL;
        free(temp);
    }
    else
    {
        while(temp->next->next!=NULL)        //Scenario 3rd...if more than 1 node
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;

    }
    return;
}

void Delete_All()
{
    struct node *temp = head;
    while(Count()>0)
    {
        Delete_First();

    }
    return;
}

void Display()
{
    struct node *temp=head;
    if(head==NULL)
    {
        printf("List is Empty! Insert a Node.\n");
        return;
    }

    while(temp!=NULL)
    {
        printf("%d-> ",temp->data);
        temp = temp->next;
    }
    return;
}

int Count()
{
    int cnt=0;
    struct node *temp=head;
    if(head!=NULL)
    {
        while(temp!=NULL)
        {
            cnt++;
            temp = temp->next;
        }
    }
    return cnt;
}

void Search()
{
    int Value,flag=0;
    struct node *temp=head;

    printf("Enter Value= ");
    scanf("%d",&Value);

    while(temp->next!=NULL)
    {
        if(Value==temp->data)
        {
            flag=1;
        }
        temp=temp->next;
    }

    if(flag==1)
    {
        printf("Value Found\n");
    }
    else
    {
        printf("Value not Found\n");
    }
    return;
}
