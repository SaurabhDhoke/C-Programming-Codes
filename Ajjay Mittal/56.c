 // invalid assignment to pointer variable 
 // Compilation error “Cannot convert int to int*”
 
 #include<stdio.h>
 int main()
  {
    int val=10;
    int* ptr=val;
    
    printf("Value of variable is %d \n",val);
    printf("Pointer holds %d\n",ptr);
  }
