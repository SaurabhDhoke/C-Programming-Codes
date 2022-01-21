#include<stdio.h>
int main()
  {
    int no =10;
    int* a1;
    int* a2;
    int* a3;
    int* a4;
    int* a5;
    int* a6;
    int* a7;
    int* a8;
    int* a9;
    int* a10;
    int* a11;
    int* a12;
    
        
        a1 = &no;
        a2 = &a1;
        a3 = &a2;
        a4 = &a3;
        a5 = &a4;
        a6 = &a5;  
        a7 = &a6;
        a8 = &a7;
        a9 = &a8;
        a10 = &a9;
        a11 = &a10;
        a12 = &a11;
        
    printf("address of no = %d \n ",no);
    printf("address of a1 = %d \n ",a1);
    printf("address of a2 = %d \n ",a2);
    printf("address of a3 = %d \n ",a3);
    printf("address of a4 = %d \n ",a4);
    printf("address of a5 = %d \n ",a5);
    printf("address of a6 = %d \n ",a6);
    printf("address of a7 = %d \n ",a7);
    printf("address of a8 = %d \n ",a8);
    printf("address of a9 = %d \n ",a9);
    printf("address of a10 = %d \n ",a10);
    printf("address of a11 = %d \n ",a11);
    printf("address of a12 = %d \n\n ",a12);
    
    
     printf("address  stoared at a1 is %d \n ",*a1);
     printf("address  stoared at a2 is %d \n ",*a2);
     printf("address  stoared at a3 is %d \n ",*a3);
     printf("address  stoared at a4 is %d \n ",*a4);
     printf("address  stoared at a5 is %d \n ",*a5);
     printf("address  stoared at a6 is %d\n ",*a6);
     printf("address  stoared at a7 is %d \n ",*a7);
     printf("address  stoared at a8 is %d\n ",*a8);
     printf("address  stoared at a9 is %d \n ",*a9);
     printf("address  stoared at a10 is %d\n ",*a10);
     printf("address  stoared at a11 is %d\n ",*a11);
     printf("address  stoared at a12 is %d \n ",*a12);
    // printf("address  stoared at a13 is %d \n ",*a13);
     
     
    
  }
