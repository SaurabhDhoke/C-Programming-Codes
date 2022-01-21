/* Program Name :- Accept an array of 10 numbers print only those pairs whose sum is 100.
                ( Input : 10 20 30 40 50 60 70 80 90 100
                  Output: 10 + 90 = 100 
			   20 + 80 = 100 
			   30 + 70 = 100 
			   40 + 60 = 100 
			   50 + 50 = 100 
			   60 + 40 = 100 
			   70 + 30 = 100 
			   80 + 20 = 100 
			   90 + 10 = 100 ) 
   Developer Name :- Dhoke Saurabh 
   Date :- 24/05/2021  */

#include<stdio.h>
int main()
{
   int arr[10]={0},i=0,j=0;
   printf("Enter Array : ");
    for(i=0;i<10;i++)
     {
       scanf("%d",&arr[i]);
     }
           
  for(int i=0 ; i<10; i++)
    {
      int j=0;
      while(j<10)
       {
           if(arr[i] + arr[j] == 100)
            {
              printf("\n%d + %d = 100 ",arr[i],arr[j]);
            }
          j++;
       }
    } 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

