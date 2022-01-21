/* Program Name :- Write a programm to to check number is Armstrongor not.
               (  Input - 370  3^3 + 7^3 + 0^3 = 370  .....number is Armstrong
                  Input - 1634 1^4 + 6^4 + 3^4 + 4^4 = 1634 ....number is not armstrong
                  0 to 9 are also armstrong numbers  )     
   Developer Name :- Dhoke Saurabh 
   Date :- 23/05/2021  */


 #include<stdio.h>
 int armstrong(int);
 int power(int,int);                                 
 int main ()
  {
    int no,ans;
    printf("Enter Number : ");
    scanf("%d",&no);
   
    ans = armstrong(no); 
      if(ans == 0)
        {
          printf("%d is Armstrong Number",no);
        }
      else
        {
          printf("%d is Not Armstrong Number",no);
        }
   return 0;
  }   
  
  
int armstrong(int no)  
 { 
   int digit=0 ,cnt=0,sum=0,Result,temp;
   temp = no;
   while(no > 0)
     {
       digit = no % 10;
       no = no / 10;
       cnt++;
     }
   no = temp;
   while(no > 0)
     {
       digit = no % 10;
       no = no / 10;
       
       Result = power(digit,cnt);
       sum = sum + Result;     
     }
   no = temp;
   if(sum == no)
     {
      return 0;
     }   
   else
     {
      return -1;
     }
 }
 
int power(int x,int y)                             
 {  
    int pow = 1;                                    
    while(y > 0)
     {
       pow = pow*x;
       y--;
     }
   return pow;
 }
