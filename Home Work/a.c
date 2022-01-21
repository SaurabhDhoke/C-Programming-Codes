

#include<stdio.h>
#include<string.h>
int word_count(char*);
char* strrev_x(char*);
int main()
 {
   char arr[100]={'\0'};
   int cnt = 0;
   printf("Enter String : ");
   scanf("%[^\n]",arr);
   cnt = word_count(arr);
  printf("%s",arr);
 
 }
int word_count(char* str)
 { 
 
    
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
              int str1 = str;
              while(*str != ' ' && *str != '\0')
               {
                 str++;
               
               }
               strrev_x(str1) ;
            }
      }         
  return 0;
 }

char* strrev_x(char* str1)
 {
   char* str2='\0';
   str2 = str1+strlen(str1)-1;
   char temp;
   
   while(*str1 <= *str2 )
    {
      temp = *str1;
      *str1 = *str2;
      *str2 = temp;
      
      str1++;
      str2--;
    }
 }
