/* Program Name :- Pattern Printing
			E E E E E 
			D D D D 
			C C C 
			B B 
			A 
   Developer Name :- Dhoke Saurabh 
   Date :- 11/06/2021  */

#include<stdio.h>
int main()
 {
   int i,j,n;
   printf("Enter number of rows : ");
   scanf("%d",&n);
   
   for(i=n ; i>0 ; i--)
    {
      for(j=1 ; j<=i ; j++)
       {
         printf("%c ",'A'+i-1);
       }
      printf("\n");
    }
   return 0;
 
 }
