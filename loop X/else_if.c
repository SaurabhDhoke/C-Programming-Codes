
 #include<stdio.h>
 void TimeTable(int istd)
  {
    if(istd == 1 )
      {
         printf("Your Exam is scheduled at 11 AM ");
      }
    else if(istd == 2)
      {
         printf("Your Exam is scheduled at 12 NOON ");
      }
    else if(istd == 3)
     {
         printf("Your Exam is scheduled at 1 PM ");
      }
    else if(istd == 4)
     {
         printf("Your Exam is scheduled at 2 PM ");
      }
    else
     {
         printf(" you entered wrong Standard... ");
     }
    
  }
 
 int main()
  {
    int iValue=0;
    
    printf("Enter your Standard : ");
    scanf("%d",&iValue);
    
    TimeTable(iValue);
    return 0;
  }
