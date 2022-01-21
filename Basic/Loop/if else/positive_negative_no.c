//  Que.Accept a number and check it is positive or negative .
//  Date:- 25-06-2021

 #include<stdio.h>
 int main()
   {
     int no=0;
     printf("Enter Any number : ");
     scanf("%d",&no);
     
     if(no >= 0)
      {
        printf("%d is Positive number.",no);
      }
     else
      {
        printf("%d is Negative number.",no);
      }
   return 0;
   }
