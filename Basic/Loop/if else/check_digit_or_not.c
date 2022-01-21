  //  Que.Accept a number and check it is digit or not.
 //  Date:- 27-06-2021
 
 #include<stdio.h>
 int main()
  {
    char ch;
    printf("Enter character which you want to check it is a digit or not : ");
    scanf("%c",&ch);
    
    if(ch >='0' && ch <='9')
     {
       printf("%c is a digit ",ch);
     }
     
    else
     {
       printf("%c is not a digit",ch);
     }
    return 0;
  }
