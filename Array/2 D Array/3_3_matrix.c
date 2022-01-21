/* Program Name :- Write a c program for to Accept a 2D array (Accept matrix 3 by 3 )
   Developer Name :- Dhoke Saurabh 
   Date :- 08/06/2021  */

#include<stdio.h> 
int main()
{
 int arr[3][3]={0};
 for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
     {
       printf("Enter Value of [%d][%d] = ",i,j);
       scanf("%d",&arr[i][j]);
     }
  }
 for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
     {
       printf("%d ", arr[i][j]);
     }
    printf("\n");
  }
 return 0;
}
