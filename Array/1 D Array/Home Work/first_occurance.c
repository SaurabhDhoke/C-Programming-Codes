/* Program Name :- Accept a 10 numbers from user store that in an array also accept a number from user and find the first occurance of that number in the array .
   Developer Name :- Dhoke Saurabh 
   Date :- 03/05/2021  */
   
#include<stdio.h>
#define SIZE 10
#define NO 0
#define YES 1
int main ()
{
  int arr[SIZE]={0};
  int found=NO,i,num=0;                       // id = index ( array index is always starts from '0' )
   for(i=0;i<SIZE;i++)
    {
      printf("Enter number %d : ",i+1);
      scanf("%d",&arr[i]);
    }
    
   printf("\nEnter Number Which you want to search : ");
   scanf("%d",&num);
     for(i=0;i<SIZE;i++)
      {
        if(arr[i] == num)
         {
           found = YES;
           break;
         }
      }
      
   if(found == YES)
    {
      printf("%d is found at %d index ",num,i);             // id = index ( array index is always starts from '0' )
    }
   else
    {
      printf("%d is not found",num);
    }
return 0;
}
