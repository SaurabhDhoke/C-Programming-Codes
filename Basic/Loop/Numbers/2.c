 /* Program Name :- Accept a number from user and find maximum number from them.
   Developer Name :- Dhoke Saurabh 
   Date :- 19/07/2021  */

 #include<stdio.h>
 int main()
  {
    auto int no,digit;
    register int max=0;
    printf("Enter Number : ");
    scanf("%d",&no);
    if(no<0)
     {
       printf("Invalied Input...");
       return -1;
     }
    while(no>0)
     {
       digit=no%10;
       no=no/10;
        if(max<digit)
          {
             max=digit;         
          }
     }
    printf("Maximum digit from number is %d ",max);    
    return 0;
  }
