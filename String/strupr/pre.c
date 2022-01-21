/* Program Name :- Write a programm to convert lower case string into upper case.
                  (by using pre defined function)
   Developer Name :- Dhoke Saurabh 
   Date :- 20/05/2021  */


#include<stdio.h>
#include<string.h>
int main()
 {
   char arr[50];
   printf("Enter any string to convert it into Upper case : ");
    scanf("%s",arr);
  
   strupr(arr);
   printf("Your string : %s\n",arr);
 
 }

