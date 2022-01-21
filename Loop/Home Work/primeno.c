/* Program Name :- Accept a number from user and check it is Prime or not  .
   Developer Name :- Dhoke Saurabh 
   Date :- 19/04/2021  */

#include<stdio.h>
int main ()
 {
   int number , flag=0,i;
   printf ("Enter number :");
   scanf("%d",&number);
    if (number<0)
      {
        printf(" Invalid input ");
        return 0;      
      }   
   for ( i=2;i<=number/2;i++)
       {
         if( number%i==0)
            { 
              flag= 1 ;
              break ;
            }
       } 
    
    if (flag==0)
       {
          printf("The given number is prime ");
       }

    else 
       {
         printf("The given number is not prime ");
       }


 } 
