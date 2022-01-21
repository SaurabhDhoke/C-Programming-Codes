 // Size of a pointer variable 
 
 #include<stdio.h>
 int main()
  {
    char* cptr;
    int* iptr;
    float* fptr;
    double* dptr;
    
    printf("Pointer to character takes %d bytes \n",sizeof( cptr));
    printf("Pointer to interger takes %d bytes \n",sizeof( iptr));
    printf("Pointer to float takes %d bytes \n",sizeof( fptr));
    printf("Pointer to double takes %d bytes \n",sizeof( dptr));
  }
