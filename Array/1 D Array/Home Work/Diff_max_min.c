/* Program Name :- Write a programm for to find Differance between maximum number and minimum number from array.
   Developer Name :- Dhoke Saurabh 
   Date :- 24/04/2021  */

#include<stdio.h>
int main ()
{
  int i,diff=0,max,min;
  int arr[10];
  printf("Enter 10 numbers in the array to find Differance between maximum number and minimum number :  ");
    for(i=0;i<10;i++)
     {
       scanf("%d",&arr[i]);
     } 
       max=min=arr[0];
        for(i=0;i<10;i++)
         {
           if(arr[i]>max)
             max=arr[i]; 
           if(arr[i]<min)
             min=arr[i]; 
         }   
       
  printf("maximum no is %d \n",max);
  printf("minimum no is %d \n",min);
  diff= max - min ;
  printf("Differance between maximum number and minimum number is = %d - %d = %d  ",max,min,diff);  
      
 return 0;
}
