#include<stdio.h>
int main( int argc, char*argv[])
 {
  
   if(argc!=4)
    {
      printf("Invalied Arguments : Please Enter 3 numbers");
      return 0;
    }   
    
   int a= atoi(argv[1]);
   int b= atoi(argv[2]);
   int c= atoi(argv[3]);
   
   printf("Addition is = %d ", a+b+c);
 }



