/* Program Name :- Pattern Printing
			* * * * * 
			* * * * 
			* * * 
			* * 
			* 
   Developer Name :- Dhoke Saurabh 
   Date :- 10/06/2021  */

#include<stdio.h> 
int main()
{
 
 for(int i=0; i<=5; i++)
  {
    for(int j=0; j<5; j++)
     {
       if(i<=j)
       printf("* ");      
     }
     printf("\n");  
  }

 return 0;
}
