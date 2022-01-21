/* Program Name :- Pattern Printing
		      * 
		    * * * 
		  * * * * * 
		* * * * * * * 
		  * * * * * 
		    * * * 
		      * 
   Developer Name :- Dhoke Saurabh 
   Date :- 11/06/2021  */

#include<stdio.h> 
int main()
{
 int i,j,n;
 int spaces ,stars;
 
 printf("Enter the value of rows : ");
 scanf("%d",&n);
 
 stars=1;
 spaces=(n-1);
 
 for( i=1; i<(n*2); i++)
  {
    for(j=1; j<=spaces; j++)
     {
       printf("  ");      
     }
     
    for(j=1; j<(stars*2); j++)
     {
       printf("* ");      
     }
      
    printf("\n");  
     
    if(i<n)
     {
       spaces--;
       stars++;
     }
    else
     {
       spaces++;
       stars--;
     }
  }

 return 0;
}
