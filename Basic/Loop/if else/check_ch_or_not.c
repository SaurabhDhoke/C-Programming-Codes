  //  Que.Accept a number and check it is alphabet or not.
 //  Date:- 27-06-2021
 
 #include<stdio.h>
 int main()
  {
    char ch;
    printf("Enter character which you want to check it is alphabet or not : ");
    scanf("%c",&ch);
    
    if( (ch >='A' && ch <='Z') || (ch >='a' && ch <='z') )
     {
       printf("%c is a Alphabet",ch);
     }
     
    else
     {
       printf("%c is not a Alphabet",ch);
     }
    return 0;
  }
