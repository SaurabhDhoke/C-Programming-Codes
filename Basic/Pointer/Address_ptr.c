 
 #include<stdio.h>
 int main()
  {
    int iNo=10;
    int *ptr1=&iNo;
    
    char cCh='p';
    char *ptr2=&cCh;
    
    float fno=10.20;
    float *ptr3=&fno;
    
    printf("Address of ptr1 : %llu \n",&ptr1);
    printf("Address of ptr2 : %llu \n",&ptr2);
    printf("Address of ptr3 : %llu \n",&ptr3);
    
    printf("Size of ptr1 %ld \n",sizeof(ptr1));
    printf("Size of ptr2 %ld \n",sizeof(ptr2));
    printf("Size of ptr3 %ld \n",sizeof(ptr3));
  return 0;
  }
