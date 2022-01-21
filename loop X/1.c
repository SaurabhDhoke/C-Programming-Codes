 
 #include<stdio.h>
 void TimeTable(int istd)
  {
    switch(istd)
     {
       case 1 :
         printf("Your Exam is scheduled at 11 AM\n ");
         break;
         
      case 2 :
         printf("Your Exam is scheduled at 12 NOON\n ");
          break;
          
      case 3 :
         printf("Your Exam is scheduled at 1 PM \n");
          break;
          
     case 4 :
         printf("Your Exam is scheduled at 2 PM \n");
          break;
          
     default : 
          printf(" you entered wrong Standard...\n ");
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
