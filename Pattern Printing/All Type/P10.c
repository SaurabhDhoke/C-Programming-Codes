/* Program Name :- Pattern Printing
			 *
			 * *
			 *   *
			 *     *
			 * * * * *
   Developer Name :- Dhoke Saurabh 
   Date :- 10/06/2021  */

#include<stdio.h> 
#define M 5
#define N 5
int main()
{
 
 for(int i=1; i<=M; i++)
  {
    int a=1;
    for(int j=1; j<=N; j++)
     {
       if(i>=j)
        {
          
	  if(i==1 || i==M || j==1 || j==i)
	    {
	     printf("%d ",a);  
	    }
	  else
	    {
	     printf("  ");  
            }	  
	  a++;  
        }         
     }
     printf("\n");  
  }

 return 0;
}

