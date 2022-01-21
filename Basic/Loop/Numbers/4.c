  /* Program Name :- Accept a number from user and revers it.
   Developer Name :- Dhoke Saurabh 
   Date :- 19/07/2021  */
   
 #include<stdio.h>
 int main()
  {
    auto int no,digit;
    register int rev=0;
    printf("Enter Number : ");
    scanf("%d",&no);
    if(no<0)
     {
       printf("Sory Sir I cant reverse it , you Entered Input is Invalied...");
       return 1;
     }
    while(no>0)
     {
       digit=no%10;
       no=no/10;
       rev=(rev*10)+digit;
     }
    printf("Reverse number : %d ",rev);
    return 0;
  }
