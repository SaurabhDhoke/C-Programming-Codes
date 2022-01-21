 // Assingment of an array to another array
 // Compilation error “L-value required in function main”
 
 #include<stdio.h>
 int main()
  { 
    int a[3],b[3]={10,20,30};
    printf("Assigning an array to an array : \n"); 
    a=b;
    
    printf("Elements of array a are : ");
    printf("%d %d %d \n",a[0],a[1],a[2]);
    
  }
  
