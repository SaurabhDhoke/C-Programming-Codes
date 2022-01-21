/* Program Name :- Pattern Printing
			1 
			1 1 
			1 1 1 
			1 1 1 1 
			1 1 1 1 1 
   Developer Name :- Dhoke Saurabh 
   Date :- 10/06/2021  */

#include<stdio.h> 
int main()
{
 
 for(int i=0; i<5; i++)
  {
    for(int j=0; j<5; j++)
     {
       if(i>=j)
       printf("1 ");      
     }
     printf("\n");  
  }

 return 0;
}
