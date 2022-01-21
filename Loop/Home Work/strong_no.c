/* Program Name :- Accept a number from user and check it is strong or not  .
   Developer Name :- Dhoke Saurabh 
   Date :- 19/04/2021  */


#include<stdio.h>
int main ()
 {
   int number,sum=0,digit=0 ,temp=0;
    printf("Enter value of number : ");
    scanf(" %d",&number);
    temp = number;
     while(number!=0)
      {
        digit = number%10;
         int fact=1;
         for(int i=1;i<=digit;i++)
          {
            fact = fact * i;           
          }
       sum = sum+fact;
       number = number/10;
        
      }       
      
      number = temp;
    
      if(number==sum)
        {
           printf("Given Number is Strong ");
        }
        
      else
        {
          printf("Given Number is Not Strong ");
        } 
        
return 0;
  } 
