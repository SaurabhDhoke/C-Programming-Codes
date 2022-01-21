/* Program Name :- Write a function to check no is vowel or consonunt  (By using 1 functions ).
   Developer Name :- Dhoke Saurabh 
   Date :- 10/05/2021  */

#include<stdio.h>
#define TRUE 1 
#define FALSE 0
#define INVALIED -1
int Vowel_Consonunt(char);
int main ()
 {
   char ch ,result ;
   printf ("Enter character ");
   scanf("%c", &ch);
   
   result = Vowel_Consonunt(ch);
       if(result ==  INVALIED)
           {
             printf("You Enter invalied character");
             return 0;
           }
        else 
        {
	     if(result == TRUE)
		printf("You Entered character is Vowel");
	     else 
		printf("You Entered character is Consonunt");
	 }	
   return 0;
 }
   
int Vowel_Consonunt(char ch)
    {
      if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
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
		   case 'u' : return TRUE;
		   	        break;
		   default :  return FALSE ;
		               break;  
	     }
	  }
       else
         return INVALIED;
    }
