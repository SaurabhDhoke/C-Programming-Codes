//Accept a Number from user and check it is palindrome or Not.
//Approach 2 –
//Created two different functions reverse and palindrome and called the reverse
//function from the palindrome function.
// Date: 13/05/2021

#include<stdio.h>
#define TRUE 1
#define FALSE 0
int reverse(int);
int palindrome(int);
int main()
  {
   int no,rev;
   printf("Enter Number = ");
   scanf("%d",&no);
   rev = palindrome(no);
     if(rev==TRUE)
        printf("Number is Palindrome");
     else
        printf("Number is Not Palindrome");
  return 0;
 }  
int palindrome(int no)
  {
    int temp=no,rev;
    rev = reverse(no);
      if(temp==rev)
        return TRUE;
      else
        return FALSE;
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
