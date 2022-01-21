 //void function call expression cannot be assigned to a variable
 //Compilation error “Not an allowed type in function main”
 
  #include<stdio.h>
  void printsum(void);
  void main(void)
   {
     int a;
     a=printsum();
     printf("The value of a is %d",a);
   }
  void printsum(void)
   {
     printf("Sum of 2 and 3 is %d",2+3); 
   }
