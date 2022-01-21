/* Program Name :- Accept a string from user and return the count of largest number.
                ( Input : Hello World Programming
                  Output: 11   // lenght of programming ) 
   Developer Name :- Dhoke Saurabh 
   Date :- 24/05/2021  */


#include<stdio.h>
int word_char(char*);
int main()
 {
   char arr[100]={'\0'};
   int cnt = 0;
   printf("Enter String : ");
   scanf("%[^\n]",arr);
   cnt = word_char(arr);
   printf("%d is max cnt",cnt);
 }
 
int word_char(char* str)
 { 
    int max_cnt=0;
    
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
              int cnt=0;
              while(*str != ' ' && *str != '\0')
               {
                 str++;
                 cnt++;
               }        
              if(cnt > max_cnt)
                {
                  max_cnt = cnt;                
                }
             }
      }         
  return max_cnt;
 }


