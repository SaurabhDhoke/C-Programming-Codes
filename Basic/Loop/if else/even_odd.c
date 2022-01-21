//  Que.Accept a number and check it is Even or Odd.
//  Date:- 25-06-2021

 #include<stdio.h>
 int main()
   {
     int no=0;
     printf("Enter Any number : ");
     scanf("%d",&no);
     
     if(no%2==0)
      {
        printf("%d is Even number.",no);
      }
     else
      {
        printf("%d is Odd number.",no);
      }
   return 0;
   }
