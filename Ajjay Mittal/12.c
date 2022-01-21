 // convert temperature in a fahrenheit to celcius 
 
 #include<stdio.h>
 int main()
 {
   float f,c;
   printf("Enter Temperature in a fahrenheit ");
   scanf("%f",&f);
   
   c= (5.0/9.0)*(f-32);
   printf("Temperature in celcius is %.2f ",c);
 
 } 
