 // Array and pointers relationship 2
 
 #include<stdio.h>
 int main()
  {
    int arr[3]={10,15,20};
    
    printf("Elements are %d  %d  %d \n",arr[0],arr[1],arr[2]);
    printf("Elements are %d  %d  %d \n",*(arr+0),*(arr+1),*(arr+2));
    printf("Elements are %d  %d  %d \n",0[arr],1[arr],2[arr]);
  
  }
