/* Program Name :- Write a function to check no is vowel or consonunt  (By using 3 functions ).
   Developer Name :- Dhoke Saurabh 
   Date :- 10/05/2021  */

#include<stdio.h>
#define INVALIED -1
#define YES 1
#define NO 0
#define Matched 11
#define Unmached 22

int check_no_character(char);
int  Vowel_Consonunt(char);
int main ()
 {
   char ch ,result ;
   printf ("Enter character ");
   scanf("%c", &ch);
   
   result = check_no_character(ch);
   
       if(result ==  INVALIED)
           {
             printf("You Enter invalied character");
             return 0;
           }
        else 
      
        {
	   if(result == YES)
             printf("You Entered character is Vowel");
	   else 
	     printf("You Entered character is Consonunt");
	 }	
   return 0;   
 }
   
 int check_no_character(char ch)    
    { 
       int result ;
       if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
         {
           result =  Vowel_Consonunt(ch);
           if(result == Matched)
              return YES;
           else
              return NO;
         }
       else
         return INVALIED;
    }  
    
 int  Vowel_Consonunt(char ch)     
    { 
           switch(ch)
             {
		   case 'A' :
		   case 'E' :
		   case 'I' :
		   case 'O' :
		   case 'U' :
		   case 'a' :
		   case 'e' :
		   case 'i' :
		   case 'o' :
		   case 'u' : return Matched;
		   	        break;
		   default :  return Unmached;
		               break;  
	     }
    }
