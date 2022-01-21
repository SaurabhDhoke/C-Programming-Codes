/* Program Name :- Pattern Printing
			* * * 
			*   * 
			*   * 
			* * * 
   Developer Name :- Dhoke Saurabh 
   Date :- 10/06/2021  */

#include<stdio.h> 
#define M 4
#define N 3
int main()
{
 
 for(int i=1; i<=M; i++)
  {
    for(int j=1; j<=N; j++)
     {
       if(i==1 || i==M || j==1 || j==N)
         printf("* ");  
       else
         printf("  ");    
     }
     printf("\n");  
  }

 return 0;
}



