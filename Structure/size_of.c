/* Program Name :- Write a programm for to find the size of structure  .
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
                      //  == 18  but o/p is 20 .... stucture is always  store address  in multiple of 4  
   };
  
  struct student s1;
  printf("Size of stucture is : %d ",sizeof(s1));
  return 0; 
 }
