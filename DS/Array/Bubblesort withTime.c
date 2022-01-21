#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int num = 0,temp,pass=0,noc=0;
	double time = 0.0;
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
	//	printf("Enter Number = ");
	//	scanf("%d",&arr[i]);
		arr[i]=rand();
	}
	printf("Before Sort = ");
	for(int i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	clock_t start = clock();
	for(int i=0;i<num-1;i++)   //Pass
	{
		pass++;
		for(int j=0;j<num-1;j++)
		{
			noc++;
			if(arr[j] > arr[j+1])
			{
				//Swapping
				temp 		= arr[j];
				arr[j] 		= arr[j+1];
				arr[j+1] 	= temp;
			}
		}
	}
	clock_t end = clock();
	printf("\nAfter Sort = ");
	for(int i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nTotal Pass = %d \n Total Comparision = %d",pass,noc);
	time = time+ double(end-start) / CLOCKS_PER_SEC;
	printf("\nTotal time in seconds = %f",time);
	return 0;
}
