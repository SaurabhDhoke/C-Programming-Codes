/* Program Name :- Write a c program to calculate the power (x^y) with function int return type is genric function .
   Developer Name :- Dhoke Saurabh 
   Date :- 9/05/2021  */

 #include<stdio.h>
 int power(int,int);                                 // Function declaration
 int main ()
  {
    int x, y, pow;
    printf("Enter base : ");
    scanf("%d",&x);
    printf("Enter exponent : ");
    scanf("%d",&y);
    
    pow = power(x,y);     
    printf("Power is %d ",pow);                                // Call
    return 0;
 }
int power(int x,int y)                              // Function Header
 {  
    int pow = 1;                                     // Body
    while(y > 0)
     {
       pow = pow*x;
       y--;
     }
   return pow;
 }
