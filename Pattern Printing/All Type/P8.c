/* Program Name :- Pattern Printing
			1 
			1 2 
			1 2 3 
			1 2 3 4 
			1 2 3 4 5 
   Developer Name :- Dhoke Saurabh 
   Date :- 10/06/2021  */

#include<stdio.h> 
int main()
{
 
 for(int i=0; i<5; i++)
  {
    int a=1;
    for(int j=0; j<5; j++)
     {
       if(i>=j)
       printf("%d ",a++);      
     }
     printf("\n");  
  }

 return 0;
}
