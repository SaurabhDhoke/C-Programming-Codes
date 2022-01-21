/* Program Name :- Write a structure which accept student information and print it on screen (with use of loop )  .
   Developer Name :- Dhoke Saurabh 
   Date :- 25/05/2021  */

#include<stdio.h>
int main()
{
  struct student 
   {
     int rno;            // 4  bytes
     char name[10];     //  10 bytes
     float per;        //   4  bytes
   };
  struct student arr[5];
  
  for(int i=0 ; i<5 ; i++)
   {
     printf("\nEnter roll number : ");
     scanf("%d",&arr[i].rno);
     printf("Enter Name : ");
     scanf("%s",&arr[i].name);
     printf("Enter Percentage : ");
     scanf("%f",&arr[i].per);
  }
  
 for(int i=0 ; i<5 ; i++)
   {
     printf("\n\nRoll no : %d",arr[i].rno);
     printf("\nStudent name : %s",arr[i].name);
     printf("\nPercentage : %f",arr[i].per);
   } 
  return 0; 
 }
