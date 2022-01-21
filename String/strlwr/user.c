/* Program Name :- Write a programm to convert upper case string into lower case.
                  (by using user defined function)
   Developer Name :- Dhoke Saurabh 
   Date :- 20/05/2021  */
#include<stdio.h>
char* strlwr_x(char*);
int main()
 {
   char arr[50];
   printf("Enter any string to convert it into lower case : ");
    scanf("%[^\n]",arr);
  
  strlwr_x(arr);
   printf("Your string : %s\n",arr);
 
 }
char* strlwr_x(char* str)
 { 
    
    while(*str !='\0')
    {
         if(*str>='A' && *str<='Z' )
             {
               *str=*str+32;
             }
        str++;
        
    }
  
 }


