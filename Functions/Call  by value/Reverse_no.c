 //Created the separate function which will reverse the given number
//and return that number to the calling function.
// Date: 13/05/2021

#include<stdio.h>
int reverse(int);
int main()
 {
   int no,rev;
   printf("Enter Number = ");
   scanf("%d",&no);
   rev = reverse(no);
   printf("Reverse Number is %d",rev);
   return 0;
 }
int reverse(int no)
 {
   int rev=0,digit;
   while(no>0)
    {
      digit = no%10;
      rev = (rev*10)+digit;
      no = no/10;
    }
 return rev;
}

