/* Program Name :- Write a structure which accept student roll no , name and marks of 3 subjects and print roll no and student name who get maximum average.
   Developer Name :- Dhoke Saurabh 
   Date :- 25/05/2021  */

#include<stdio.h>
#define SIZE 5
int main()
{
  struct student 
   {
     int rno,m1,m2,m3;            // 16 bytes
     float avg,max_avg;          //  12 bytes
     char name[10];             //   10 bytes
           
   };
  struct student arr[SIZE];
  
  for(int i=0 ; i<SIZE ; i++)
   {
     printf("\nEnter roll number   : ");
     scanf("%d",&arr[i].rno);
     printf("Enter Name          : ");
     scanf("%s",&arr[i].name);
     printf("Enter Marks         : ");
     scanf("%d%d%d",&arr[i].m1,&arr[i].m2,&arr[i].m3);
     
     arr[i].avg = (arr[i].m1+arr[i].m2+arr[i].m3)/3;   
   }
  
 for(int i=0 ; i<SIZE ; i++)
   {
     printf("\n\nRoll no      : %d",arr[i].rno);
     printf("\nStudent name : %s",arr[i].name);
     printf("\nmarks        : %d %d %d",arr[i].m1,arr[i].m2,arr[i].m3);
     printf("\nAverage      :%.2f",arr[i].avg);
   } 
 
 arr[0].max_avg = arr[0].avg;
 
 for(int i=0 ; i<SIZE ; i++)
  {
    if(arr[0].max_avg < arr[i].avg)
     {
      arr[0].max_avg = arr[i].avg;
     }
  }
  
 for(int i=0 ; i<5 ; i++) 
   {
     if(arr[0].max_avg == arr[i].avg)
       {
          printf("\n\nRoll no of student who get maximum average : %d ",arr[i].rno);
          printf("\nName of student who get maximum average : %s ",arr[i].name);
       }
   }
  return 0; 
 }
