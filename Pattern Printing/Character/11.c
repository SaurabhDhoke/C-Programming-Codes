 /*ABCDCBA
   ABCBA
   ABA
   A */

#include<stdio.h>
int main()
 {
   int i = 0, j = 0,k = 0, No = 0;
   char ch = 'A';
   
   printf("Enter Number : ");
   scanf("%d",&No);
  
   for(i = 1 ; i <= No ; i++)
    {
      ch = 'A';
      for(j = i ; j < No ; j++)
       {
         printf("%c ",ch);
         ch++;
       }
      
      while(ch >= 'A')
       {
         printf("%c ",ch);
         ch--;
        }
      printf("\n");    
     }
   return 0;
  }
