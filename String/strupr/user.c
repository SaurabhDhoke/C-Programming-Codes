/* Program Name :- Write a programm to convert lower case string into upper case.
                  (by using user defined function)
   Developer Name :- Dhoke Saurabh 
   Date :- 20/05/2021  */


#include<stdio.h>
char* strupr_x(char*);
int main()
 {
   char arr[50];
   printf("Enter any string to convert it into Upper case : ");
    scanf("%[^\n]",arr);
  
  strupr_x(arr);
   printf("Your string : %s\n",arr);
 
 }
char* strupr_x(char* str)
 { 
    
    while(*str !='\0')
    {
         if(*str>='a' && *str<='z' )
             {
               *str=*str-32;
             }
        str++;
        
    }
  
 }


