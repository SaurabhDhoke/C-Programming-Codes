/* Program Name :- Write a programm for to accept a float array and print their sum .
   Developer Name :- Dhoke Saurabh 
   Date :- 23/04/2021  */

#include<stdio.h>
int main ()
{
  int i ;
  float arr[5],sum=0.0;
  printf("Enter any five array elements : ");
    for(i=0;i<5;i++)
     {
       scanf("%f",&arr[i]);
     }
     
  for(i=0;i<=4;i++)
   {
     sum=sum+arr[i];
   }
  printf("Sum is %f ",sum);
return 0;
}

