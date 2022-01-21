#include<stdio.h>
int main()
{
	int num = 0,temp,pass=0,noc=0;
	printf("Enter how many element you want = ");
	scanf("%d",&num);
	
	if(num<=0)                                              //Filter
	  {
	    printf("Invalid Size\n");
	    return -1;
	  }
	int arr[num];                                          //array creation 

	for(int i=0;i<num;i++)                                    //Accept Value
	 {
           printf("Enter Number = ");
	   scanf("%d",&arr[i]);
	 }
	 
	printf("Before Sort = ");                                   //Display Array Before Sort
	for(int i=0;i<num;i++)
	 {
	   printf("%d ",arr[i]);
	 }
	                                                          //Bubble sort logic start from here
	for(int i=0;i<num-1;i++)                                 //Loop for Passes i.e. N-1  
	 {
	   pass++;
	   for(int j=0;j<num-1;j++)                        //Loop for Comparision 
            {
	      noc++;
	      if(arr[j] > arr[j+1])                  //Swapping logic
	        {                              
		  temp 		= arr[j];
		  arr[j] 		= arr[j+1];
		  arr[j+1] 	= temp;
	        }
	    }
	}
	
	printf("\nAfter Sort = ");                                //Display array after sort
	for(int i=0;i<num;i++)
	 {
	   printf("%d ",arr[i]);
	 }
	printf("\nTotal Pass = %d",pass);
	printf("\nTotal Number of Comparison = %d",noc);
	return 0;
}
