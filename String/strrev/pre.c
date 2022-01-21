/* Program Name :- Write a programm for copy the string .
  ( by using predefined function : char strrev( char*);  ) 
   Developer Name :- Dhoke Saurabh 
   Date :- 18/05/2021  */

#include<stdio.h>
#include<string.h>
int main()
 {
   char arr[20]="Hello World";
   printf("Before reverse : %s\n",arr);

   strrev(arr);
   printf("After reverse : %s\n",arr);
 
  return 0;
 }
