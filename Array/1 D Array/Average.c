/* Program Name :- Write a programm for average  of  5 numbers by using array  .
   Developer Name :- Dhoke Saurabh 
   Date :- 22/04/2021  */


#include<stdio.h>
int main ()
 {
   int arr[5]={12,84,65,96,34},sum=0;
   float avg=0.0;
    for(int i=0;i<=4;i++)
      {
        sum=sum+arr[i];
      }
   printf(" Sum = %d",sum);
   avg=sum/5.0;
   printf("\n Average = %d / 5.0 \n \t = %f \n",sum,avg);
 return 0;
 }
