/* Program Name :- Pattern Printing
			A 
			A B 
			A B C 
			A B C D 
			A B C D E 
   Developer Name :- Dhoke Saurabh 
   Date :- 11/06/2021  */

#include<stdio.h>
int main()
 {
   int i,j,n;
   printf("Enter number of rows : ");
   scanf("%d",&n);
   
   for(i=1 ; i<=n ; i++)
    {
      for(j=0 ; j<i ; j++)
       {
         printf("%c ",'A'+j);
       }
      printf("\n");
    }
   return 0;
 
 }
