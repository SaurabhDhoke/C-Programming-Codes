

#include<stdio.h>
#include<string.h>
#define TRUE 1
#define FALSE 0
int strcmp_x(char*,char*);
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
  
   result = strcmp_x(arr,brr);
    if(result == TRUE)
      printf("Both strings are equal");
    else
      printf("Both strings are not equal");
   return 0;
 }

int strcmp_x(char* arr,char* brr)
 {
  int cnt=0,len=0;
  len = strlen(arr);
  while(*arr !='\0')
    {
      if(*arr == *brr)
         {
           cnt++;
         }
      *arr++;
      *brr++;
    }
  if(cnt == len)
     return TRUE;
  else
     return FALSE; 
 }       
