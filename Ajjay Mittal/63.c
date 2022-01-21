  // Pointer to a pointer
  
  #include<stdio.h>
  int main()
   { 
     int i=10;
     int* p1=&i;         // Pointer to int
     int** p2=&p1;      // Pointer to pointer to int
     int*** p3=&p2;    // Pointer to pointer to pointer to int
     int**** p4=&p3;  // ………………concept scales up
     int***** p5=&p4;
     int****** p6=&p5;
     int******* p7=&p6;
     int******** p8=&p7;
     int********* p9=&p8;
     int********** p10=&p9;
     int*********** p11=&p10;
     int************ p12=&p11;
     
     printf("The values of variables are:\n");
     printf("%d\t",*p1);
     printf("%d\t",**p2);
     printf("%d\t",***p3);
     printf("%d\t",****p4);
     printf("%d\t",*****p5); 
     printf("%d\t",******p6);
     printf("%d\t",*******p7);
     printf("%d\t",********p8);
     printf("%d\t",*********p9); 
     printf("%d\t",**********p10);
     printf("%d\t",***********p11);
     printf("%d\t",************p12);
   }
