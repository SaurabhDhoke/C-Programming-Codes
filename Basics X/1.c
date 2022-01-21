 // Datatypes modifiers sizes 
 
 #include<stdio.h>
 int main()
  {
    int a=11;                   // 4 bytes
    short int b =21;            // 2 bytes
    long int c =31;             // 8 bytes   
    
    printf("Size of int %d \n",sizeof(a));
    printf("Size of short int %d \n",sizeof(b));
    printf("Size of long int %d \n",sizeof(c));
    return 0;
  }
