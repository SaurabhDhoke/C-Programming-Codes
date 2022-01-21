/* Program Name :- Accept a string from user and  also accept a character from user and find out count of that character in the given string (By use of Function) .
   Developer Name :- Dhoke Saurabh 
   Date :- 15/05/2021  */

#include<stdio.h>
#define SIZE 50
int search(char*,char);
int main()
 {
    char arr[SIZE];
    char ch;
    int cnt=0;
    
    printf("Enter String : ");
      scanf("%[^\n]",arr);
    printf("Enter character which you want to search : ");
      scanf("%s",&ch);
   
    cnt = search(arr,ch);
    printf("Count of %c is %d",ch,cnt);
    return 0;
 }
 
int search(char* arr,char ch)
 {
  int cnt=0;
  for(int i=0;i<=SIZE;i++)
    {
      if(arr[i] == ch)
        cnt++;
    }
  return cnt;
 }
    
