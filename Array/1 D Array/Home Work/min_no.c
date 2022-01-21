/* Program Name :- Write a programm for to find minimum number from array.
   Developer Name :- Dhoke Saurabh 
   Date :- 24/04/2021  */

#include<stdio.h>
int main ()
{
  int i ,min;
  int arr[10];
  printf("Enter 10 numbers in the array to find minimum number :  ");
    for(i=0;i<10;i++)
     {
       scanf("%d",&arr[i]);
     } 
   
   min=arr[0];
   for(i=0;i<10;i++)
     {
       if(arr[i]<min)
        min=arr[i]; 
     } 
       printf("minimum no is %d ",min);
 return 0;
}
