/* Program Name :- Write a c program for to print 1 to 10 prime numbers.
   Developer Name :- Dhoke Saurabh 
   Date :- 23/04/2021  */

#include<stdio.h>
int main ()
 {
   int i,j;
   printf ("Below are the prime numbers from 1 to 10 \n");
   
   for (i=1;i<=10;i++)
    {
       int cnt=0;
       for (j=1;j<=i;j++)
        {
         if(i%j==0)
          { 
            cnt++;
          }
        }
         if(cnt==2)
          {        
           printf("%d \t ",i);
          }
    }
 return 0;
 } 
