/* Program Name :- Accept a string from user and find out count of special character in the string.
   Developer Name :- Dhoke Saurabh 
   Date :- 16/05/2021  */

#include<stdio.h>
#define SIZE 50
int search(char*);
int main()
 {
    char arr[SIZE];
    int cnt=0;
    
    printf("Enter String : ");
      scanf("%[^\n]",arr);
    
    cnt = search(arr);
    printf("Count of Special character is %d",cnt);
    return 0;
 }
 
int search(char* arr)
 {
      int cnt=0;
      while(*arr !='\0')
      {
       if((*arr>='a' && *arr<='z') || (*arr>='A' && *arr<='Z') || (*arr>='0' && *arr<='9') || (*arr==32))
         {
              
         }
       else 
         {
           cnt++;   
         }
         
       arr++;
      }
 return cnt;
}
    
    
    
    
    
    
    
    
    
