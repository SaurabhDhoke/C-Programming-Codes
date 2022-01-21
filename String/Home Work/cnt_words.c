/* Program Name :- Write a programm to count the number of words are present in string.
                  
   Developer Name :- Dhoke Saurabh 
   Date :- 24/05/2021  */


#include<stdio.h>
int word_count(char*);
int main()
 {
   char arr[100]={'\0'};
   int cnt = 0;
   printf("Enter String : ");
   scanf("%[^\n]",arr);
   cnt = word_count(arr);
   printf("%d words present in your string.",cnt);
 
 }
int word_count(char* str)
 { 
    int cnt=0;
    
    while(*str !='\0')
    {
         if(*str == ' ' )
           {
             while(*str == ' ')
              {
                str++;
              }
            }
          else
            {
              while(*str != ' ' && *str != '\0')
               {
                 str++;
               }
              cnt++;       
            }
      }         
  return cnt;
 }


