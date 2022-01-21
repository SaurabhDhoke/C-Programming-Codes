/* Program Name :- Write a programm for copy the string .
  ( by using predefined function : char* strcpy( char* dest ,char* src);  ) 
   Developer Name :- Dhoke Saurabh 
   Date :- 18/05/2021  */

#include<stdio.h>
#include<string.h>
int main()
 {
   char arr[6]="Hello",brr[6]={'\0'};
   printf("Source : %s\n",arr);
   printf("Dest   : %s\n",brr);
   
   strcpy(brr,arr);
   printf("Source : %s\n",arr);
   printf("Dest   : %s\n",brr);
  return 0;
 }
