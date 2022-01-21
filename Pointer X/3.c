 // Pointer points at 12 address which is a address of os because of this os closed our  process and give segmentation fault error.
 
 #include<stdio.h>
 int main()
  { 
    int no=10;
    int *ptr=NULL;
    
    printf(" value in ptr : %d\n",ptr);
    ptr=ptr+3; 
       
    printf(" value in ptr : %d\n",*ptr);
        
    printf(" Address of ptr : %d\n",&ptr);
    return 0; 
  }
