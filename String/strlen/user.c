/* Program Name :- Write a programm for calculate lenght of the string .
  ( by using user defined function : int strlen_x(char*);  ) 
   Developer Name :- Dhoke Saurabh 
   Date :- 17/05/2021  */

#include<stdio.h>
#define SIZE 50
int strlen_x(char*);
int main()
 {
  char arr[SIZE],len;
   printf("Enter String : ");
      scanf("%[^\n]",arr);
   len=strlen_x(arr);
  printf("Length of String = %d",len);
  return 0;
 }
int strlen_x(char* str)
 { 
   int cnt =0 ;
   while(*str !='\0')
    {
      cnt++;
      str++;
    }
   return cnt;
 }
