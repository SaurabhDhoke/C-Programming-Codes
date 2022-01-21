/* Program Name :- Accept a 10 numbers from user store that in an array also accept a number from user and search that in the array .
   Developer Name :- Dhoke Saurabh 
   Date :- 03/05/2021  */
   
#include<stdio.h>
#define SIZE 10
#define NO 0
#define YES 1
int main ()
{
  int arr[SIZE]={0};
  int found=NO,i,j,no;
   for(i=0;i<SIZE;i++)
    {
      printf("Enter number %d : ",i+1);
      scanf("%d",&arr[i]);
    }
      
   printf("\nEnter Number Which you want to search : ");
   scanf("%d",&no);
     for(i=0;i<SIZE;i++)
      {
        if(arr[i] == no)
         {
           found = YES;
           break;
         }
      }
      
   if(found == YES)
    {
      printf("%d is found ",no);
    }
   else
    {
      printf("%d is not found",no);
    }
return 0;
}
