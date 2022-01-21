/* Program Name :- Write a c program to check entered number is Spy or not .
   Developer Name :- Dhoke Saurabh 
   Date :- 13/05/2021  */

#include<stdio.h>
#define YES 1
#define NO 2
int Spy_no(int);
int main()
 {
   int number,Result;
   printf("Enter Number : ");
   scanf("%d",&number);
  
   Result = Spy_no(number);
     if(Result == YES)
       printf("%d is Spy Number",number);
     else
       printf("%d is not Spy Number",number);
 
   return 0;
 } 
int Spy_no(int number)
 {
   int sum=0,mul=1,digit=0;
     while(number>0)
       {
         digit = number % 10;
         sum = sum + digit;
         mul = mul * digit;
         number = number /10;
       }
      if(sum == mul)
        return YES;
      else
        return NO;
 }
 
 
 
 
 
