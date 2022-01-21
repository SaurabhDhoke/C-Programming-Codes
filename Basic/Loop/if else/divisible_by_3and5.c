//  Que.Accept a number and check it is divisible by 3 & 5 or not .
//  Date:- 25-06-2021

 #include<stdio.h>
 int main()
   {
     int no=0;
     printf("Enter Any number : ");
     scanf("%d",&no);
     
     if(no%3==0 && no%5==0)
      {
        printf("%d is divisible by 3 and 5 .",no);
      }
     else
      {
        printf("%d is not divisible by 3 and 5 .",no);
      }
   return 0;
   }
