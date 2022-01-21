/* Program Name :- Write a c program for to Accept a 2D array (Accept matrix 2 by 3 )
   Developer Name :- Dhoke Saurabh 
   Date :- 08/06/2021  */

#include<stdio.h> 
int main()
{
 int arr[2][3]={0};
 for(int row=0; row<2; row++)
  {
    for(int col=0; col<3; col++)
     {
       printf("Enter Value of [%d][%d] = ", row, col);
       scanf("%d",&arr[row][col]);
     }
  }
 for(int row=0; row<2; row++)
  {
    for(int col=0; col<3; col++)
     {
       printf("%d ", arr[row][col]);
     }
    printf("\n");
  }
 return 0;
}
