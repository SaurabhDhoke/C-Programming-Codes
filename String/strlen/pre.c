/* Program Name :- Write a programm for calculate lenght of the string .
  ( by using predefined function : int strlen(const char*);  ) 
   Developer Name :- Dhoke Saurabh 
   Date :- 16/05/2021  */

#include<stdio.h>
#include<string.h>
#define SIZE 50
int main()
 {
  char arr[SIZE],len;
   printf("Enter String : ");
      scanf("%[^\n]",arr);
   len=strlen(arr);
  printf("Length of String = %d",len);
  return 0;
 }
