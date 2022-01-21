/* Program Name :- Pattern Printing
			A B C D E 
			A B C D 
			A B C 
			A B 
			A 
   Developer Name :- Dhoke Saurabh 
   Date :- 11/06/2021  */

#include<stdio.h>
int main()
 {
   int i,j,n;
   printf("Enter number of rows : ");
   scanf("%d",&n);
   
   for(i=0 ; i<n ; i++)
    {
      int a=65;
      for(j=i ; j<n ; j++)
       {
         printf("%c ",a++);
       }
      printf("\n");
    }
   return 0;
 
 }
