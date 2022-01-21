/* Program Name :- Accept matrix 3 by 3 and print sum of all elements .
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
 
 printf("\n");
 for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
     {
       sum = sum + arr[i][j];
     }
  } 
 
 printf("Sum of all matrix elements is %d ",sum);
 return 0;
}
