#include<stdio.h>
int main()
{
	int num = 0,temp,pass=0,noc=0,flag=0;
	printf("Enter how many element you want = ");
	scanf("%d",&num);
	//Filter
	if(num<=0)
	{
		printf("Invalid Size\n");
		return -1;
	}
	int arr[num]; //array creation
	
	//Accept Value
	for(int i=0;i<num;i++)
	{
		printf("Enter Number = ");
		scanf("%d",&arr[i]);
	}
	//Display Array Before Sort
	printf("Before Sort = ");
	for(int i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	//Bubble sort logic start from here
	for(int i=0;i<num-1;i++)   //Loop for Passes i.e. N-1
	{
		pass++;
		flag = 0;
		for(int j=0;j<num-i-1;j++) //Loop for Comparision 
		{
			noc++;
			if(arr[j] > arr[j+1])
			{
				//Swapping logic
				temp 		= arr[j];
				arr[j] 		= arr[j+1];
				arr[j+1] 	= temp;
				flag = 1;
			}
		}
		if(flag==0)
		{
			break;
		}
	}
	//Display array after sort
	printf("\nAfter Sort = ");
	for(int i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nTotal Pass = %d",pass);
	printf("\nTotal Number of Comparison = %d\n",noc);
	return 0;
}
