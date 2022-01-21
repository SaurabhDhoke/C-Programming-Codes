/* Program Name :- Write a programm to convert upper case string into lower case 
                  (by using pre defined function)
   Developer Name :- Dhoke Saurabh 
   Date :- 25/05/2021  */


#include<stdio.h>
#include<string.h>
int main()
 {
   char arr[50];
   printf("Enter any string to convert it into Upper case : ");
    scanf("%s",arr);
  
   strlwr(arr);
   printf("Your string : %s\n",arr);
 
 }

