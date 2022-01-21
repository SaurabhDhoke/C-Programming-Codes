#include<stdio.h>
int main ()
 {
   int arr[6]={10,20,30,40,50,60};
   int* p1=arr+1;
   int* p2=arr+4;
   
   printf("%d",p2-p1);
 
 }
