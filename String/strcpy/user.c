/* Program Name :- Write a programm for copy the string .
  ( by using user defined function : char* strcpy_x( char* dest ,char* src);  ) 
   Developer Name :- Dhoke Saurabh 
   Date :- 18/05/2021  */

#include<stdio.h>
char* strcpy_x(char* dest,char* src);
int main()
 {
   char arr[6]="Hello",brr[6]={'\0'};
   printf("Source : %s\n",arr);
   printf("Dest   : %s\n",brr);
   
   strcpy_x(brr,arr);
   printf("Source : %s\n",arr);
   printf("Dest   : %s\n",brr);
  return 0;
 }
char* strcpy_x(char* dest,char* src)
 {
  while(*src != '\0')
   {
     *dest = *src;
     src++;
     dest++;
   }
   *dest = '\0';
 }
 
 
 
 
 
