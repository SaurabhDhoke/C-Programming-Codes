/* Program Name :- Write a c program to calculate the power (x^y) with function void return type is not genric function .
   Developer Name :- Dhoke Saurabh 
   Date :- 9/05/2021  */

 #include<stdio.h>
 void power(int,int);                                 // Function declaration
 int main ()
  {
    int x , y;
    printf("Enter base : ");
    scanf("%d",&x);
    printf("Enter exponent : ");
    scanf("%d",&y);
    
    power(x,y);                                      // Call
    return 0;
 }
void power(int x,int y)                              // Function Header
 {  
    int pow = 1;                                     // Body
    while(y > 0)
     {
       pow = pow*x;
       y--;
     }
     
   printf("Power is %d ",pow);
   return;
 }
