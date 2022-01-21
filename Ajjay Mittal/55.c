 // Dereferencing pointers
 
 #include<stdio.h>
 int main()
  {
    int val =12;
    int* iptr=&val;
    int** pptr=&iptr;
    
    printf("value is %d \n",val);
    printf("value by dereferencing iptr %d \n",*iptr);
    printf("value by dereferencing pptr %d \n",**pptr);
    printf("value of iptr %d \n",iptr);
    printf("value of pptr %d \n",pptr);
  }
