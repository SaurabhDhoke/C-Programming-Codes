
 #include<stdio.h>
 int main()
  {
    int no[4]={10,20,30,40};
    int *a,*b;
    a=&no[2];
    b=(no+3);
    
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    
    printf("a=%d\n",*a);
    printf("b=%d\n",*b);
    return 0;
  }
