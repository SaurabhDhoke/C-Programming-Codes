/* Program Name :- Write a c program to calculate the power (x^y).
   Developer Name :- Dhoke Saurabh 
   Date :- 9/05/2021  */

 #include<stdio.h>
 int main ()
  {
    int x , y, power=1;
    
    printf("Enter number : ");
    scanf("%d",&x);
     
    printf("Enter exponent : ");
    scanf("%d",&y);
     
    while(y > 0)
     {
       power = power*x;
       y--;
     }
     
   printf("Power is %d ",power);
   return 0;
  }
