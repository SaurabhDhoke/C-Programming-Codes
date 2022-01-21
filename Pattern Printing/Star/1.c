/* Program Name :- Pattern Printing
			 *
			 * *
			 * * *
			 * * * *
			 * * * * *
   Developer Name :- Dhoke Saurabh 
   Date :- 11/06/2021  */

#include<stdio.h> 
int main()
{
 int i,j,n;
 printf("Enter the value of n : ");
 scanf("%d",&n);
 for( i=1; i<=n; i++)
  {
    for(j=1; j<=i; j++)
     {
       printf("* ");      
     }
     printf("\n");  
  }

 return 0;
}
