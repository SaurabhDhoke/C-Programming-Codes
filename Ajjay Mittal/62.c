 // Array of pointers 
  
 #include<stdio.h>
 int main()
  {
    int a=10,b=20,c=30;
    int* arr[3]={&a,&b,&c};
    
    printf("The values of a variables are : \n");
    printf("%d  %d  %d \n",a,b,c);
    printf("%d  %d  %d \n",*arr[0],*arr[1],*arr[2]);
  
  }
