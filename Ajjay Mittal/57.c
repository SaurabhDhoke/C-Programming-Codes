 //  assignment to pointer variable 
 //  A pointer variable ptr (of type float* ) can hold the ad-dress of an integer variable (i.e. int* )
 
 #include<stdio.h>
 int main()
  {
    int val=10;
    float* ptr=&val;
    
    printf("Value of variable is %d \n",val);
    printf("pointer holds %d \n",ptr);
  }
 
