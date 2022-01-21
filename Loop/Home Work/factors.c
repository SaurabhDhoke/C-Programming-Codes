#include<stdio.h>
void main ()
 {
   int n, f=1;
    printf("Enter value of n : ");
    scanf(" %d",&n);
     while(n>0)
      {
        f=f*n;
        n--;
      }
    
    printf("\n factorial = %d ", f);
     
  } 
