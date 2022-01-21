#include<stdio.h>
#define SIZE 101
int main()
{
	int arr[SIZE]={0};
	int index,value,num;
	
	printf("Enter how many number you want = ");
	scanf("%d",&num);
	
	if(num<=0 || num>SIZE-1)
	{
		printf("Invalid Input\n");
		return -1;
	}
	//store the values in array
	for(int i=0;i<num;i++)     // 5
	{
		printf("Enter Value %d = ",i+1);
		scanf("%d",&arr[i]);
	}
	//Display array
	printf("Array Before Update\n");
	for(int i=0;i<num;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	
	printf("Enter value which you want search  = ");
	scanf("%d",&value);
	int pos=-1;
	for(int i=0;i<num;i++)
	{
		if(value == arr[i]) //Condition to check match
		{
			pos = i;
			break;
		}
	}
	if(pos==-1)
	{
		printf("Value Not found\n");
	}
	else
	{
		printf("%d value found at %d location",value,pos);
	}
	                            
	return 0;
}
