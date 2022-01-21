/* Program Name :- Write a structure which accept student information and print it on screen (with out use of loop )  .
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
  
  struct student s1,s2,s3;
  
  printf("\nEnter roll number : ");
  scanf("%d",&s1.rno);
  printf("Enter Name : ");
  scanf("%s",&s1.name);
  printf("Enter Percentage : ");
  scanf("%f",&s1.per);
  
  printf("\nEnter roll number : ");
  scanf("%d",&s2.rno);
  printf("Enter Name : ");
  scanf("%s",&s2.name);
  printf("Enter Percentage : ");
  scanf("%f",&s2.per);
  
  printf("\nEnter roll number : ");
  scanf("%d",&s3.rno);
  printf("Enter Name : ");
  scanf("%s",&s3.name);
  printf("Enter Percentage : ");
  scanf("%f",&s3.per);
  
  printf("\nRoll no : %d",s1.rno);
  printf("\nStudent name : %s",s1.name);
  printf("\nPercentage : %f",s1.per);
  
  printf("\nRoll no : %d",s2.rno);
  printf("\nStudent name : %s",s2.name);
  printf("\nPercentage : %f",s2.per);
  
  printf("\nRoll no : %d",s3.rno);
  printf("\nStudent name : %s",s3.name);
  printf("\nPercentage : %f",s3.per);
  
  return 0; 
 }
