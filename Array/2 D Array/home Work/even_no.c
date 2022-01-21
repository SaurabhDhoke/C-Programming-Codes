/* Program Name :- Accept matrix 3 by 3 and print even numbers from matrix .
   Developer Name :- Dhoke Saurabh 
   Date :- 08/06/2021  */

#include<stdio.h> 
int main()
{
 int arr[3][3]={0},sum=0;
 for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
     {
       printf("Enter Value of [%d][%d] = ",i,j);
       scanf("%d",&arr[i][j]);
     }
  }
  
 printf("\nYour Matrix \n "); 
 for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
     {
       printf(" %d", arr[i][j]);
     }
    printf("\n ");
  }
 
 printf("\nEven numbers are : ");
 for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
     {
       if(arr[i][j] % 2 == 0)
        {
          printf(" %d ",arr[i][j]);
        }
     }    
  } 
 return 0;
}
