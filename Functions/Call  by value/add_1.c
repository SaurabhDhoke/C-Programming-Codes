/* Program Name :- Write a function which aacept 2 numbers and return its addtion.
   Developer Name :- Dhoke Saurabh 
   Date :- 5/05/2021  */


#include<stdio.h>              // Standard input output header file 
int Addition(int,int);        // Function declaration 
int main()
 {
   int a=10, b=20 , ans;
   ans = Addition(a,b);   // Function call 
   printf("Ans is %d",ans);
   return 0;
 }
 
 int Addition(int a,int b )   // Header
  {
    int ans;
    ans = a+b;                // c=30  // body
    return ans;
  }
