 // Assigning a pointer to a void pointer 
 
 #include<stdio.h>
 int main()
  {
    int a=10;
    int* iptr=&a;
    void* vptr=iptr;
    printf("int* is emplicitly converted to void* \n");
  
  }
