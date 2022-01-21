/* Program Name :- Write a programm for concat two strings.
  ( by using predefined function : char* strcat( char* dest ,char* src);  ) 
   Developer Name :- Dhoke Saurabh 
   Date :- 18/05/2021  */

#include<stdio.h>
#include<string.h>
int main()
 {
  char arr[40]="Hello";
  char brr[20]="World";
  
  printf("Before Concat Arr = %s\n",arr);
  printf("Before Concat brr = %s\n",brr);
  
  strcat(arr,brr);
  printf("After Concat Arr = %s\n",arr);
  printf("After Concat Brr = %s\n",brr);
 }
