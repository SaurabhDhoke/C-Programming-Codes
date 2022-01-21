/* Program Name :- Write a programm for to find maximum number from array.
   Developer Name :- Dhoke Saurabh 
   Date :- 24/04/2021  */

#include<stdio.h>
int main ()
{
  int i ,max;
  int arr[10];
  printf("Enter 10 numbers in the array to find maximum number :  ");
    for(i=0;i<10;i++)
     {
       scanf("%d",&arr[i]);
     } 
     
   max=arr[0];
   for(i=0;i<10;i++)
     {
       if(arr[i]>max)
        max=arr[i]; 
     } 
       printf("maximum no is %d ",max);
 return 0;
}
