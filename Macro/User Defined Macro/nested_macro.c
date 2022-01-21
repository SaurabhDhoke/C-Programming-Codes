#include<stdio.h>
#define Max(a,b) (a>b)?a:b
#define MUL(a,b) (Max(a,b) + (a*b))
int main()
 {
   printf("Ansver is %d ",MUL(2,3));
   return 0;
 }
