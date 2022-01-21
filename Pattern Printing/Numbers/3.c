/* Program Name :- Pattern Printing
			1 
			2 1 
			3 2 1 
			4 3 2 1 
			5 4 3 2 1 

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
         printf("%d ",(i-j));
       }
      printf("\n");
    }
   return 0;
 
 }
