/* Program Name :- Pattern Printing
			1 
			2 3 
			4 5 6 
			7 8 9 10 
			11 12 13 14 15 
 
   Developer Name :- Dhoke Saurabh 
   Date :- 10/06/2021  */

#include<stdio.h> 
int main()
{
 int a=1;
 for(int i=0; i<5; i++)
  {
    for(int j=0; j<5; j++)
     {
       if(i>=j)
       printf("%d ",a++);      
     }
     printf("\n");  
  }

 return 0;
}
