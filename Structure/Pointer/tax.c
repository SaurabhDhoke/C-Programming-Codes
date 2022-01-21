#include<stdio.h>
#define SIZE 10
struct emp
{
	int id;
	char name[SIZE];
	int salary;
	float tax;
};
void calculate_tax(struct emp*,int); //Function Declaration

int main()
{
	int no=0;
	struct emp arr[SIZE]; //Static Memory Allocation
	printf("How Many Emp you want = ");
	scanf("%d",&no);
	
	for(int i=0;i<no;i++)
	{
		arr[i].id=i+100;
		printf("Enter Name = ");
		scanf("%s",&arr[i].name);
		printf("Salary = ");
		scanf("%d",&arr[i].salary);
	}
	
	calculate_tax(arr,no);
	printf("\nEMP_ID \tEMP NAME \t   SALARY \t\t  TAX \n");
	for(int i=0;i<no;i++)
	{
		printf("\n %d\t %s\t\t    %d\t\t   %.2f\n",arr[i].id,arr[i].name,arr[i].salary,arr[i].tax);
	}
	
	return 0;
}
void calculate_tax(struct emp* ptr,int no)
{
	while(no > 0)
	{
		if(ptr->salary < 100000)
		{
			ptr->tax = (ptr->salary/100)*0;   
		}
		else if(ptr->salary >= 100000 && ptr->salary <200000)
		{
			ptr->tax = (ptr->salary/100)*10;
		}
		else if(ptr->salary >= 200000 && ptr->salary <300000)
		{
			ptr->tax = (ptr->salary/100)*20;
		}
		else
		{
			ptr->tax = (ptr->salary/100)*30;
		}
		ptr++;
		no--;
	}
}
