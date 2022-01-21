

#include<stdio.h>
#include<string.h>
int main()
 {
   char arr[50],brr[50];
   int result ;
   printf("Enter first string : ");
   scanf("%[^\n]",arr);    
    //gets(arr);   
   printf("Enter second string : ");
   scanf("%s",brr);                                            
   //gets(brr);                
   result = strcmp(arr,brr);
    if(result == 0)
      printf("Both strings are equal");
    else
      printf("Both strings are not equal");
   return 0;
 }

