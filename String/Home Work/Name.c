/* Program Name :- Accept Your name and print it on screen .
   Developer Name :- Dhoke Saurabh 
   Date :- 14/05/2021  */

#include<stdio.h>
#define SIZE 50
int main()
 {
    char arr[SIZE];
    printf("Enter Your Full name : ");
    scanf("%[^\n]",arr);
    printf("Your Name : %s",arr);
    return 0;
    
  }
