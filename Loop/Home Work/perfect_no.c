/* Program Name :- Accept a number from user and check it is Perfect or not  .
   Developer Name :- Dhoke Saurabh 
   Date :- 19/04/2021  */


#include<stdio.h>
int main ()
 {
   int number,sum=0;
    printf("Enter value of number : ");
    scanf(" %d",&number);
    
     if(number<0)
        {
          printf("Invalid Entry ");
          return 0;
        }
     for(int i=1;i<=number/2;i++)
        {
          if (number%i==0)
           {
            sum=sum+i;
           }
        }
        
     if(sum==number)
       {
         printf("Given number is Perfect 🤩️");
       }
     else 
       {
         printf("Given number is not Perfect 😰️");
       }
          
return 0;
  } 
