 // swapping of two numbers 
 #include<stdio.h>
 int main()
  {
    int no1,no2;
    printf("Enter two numbers ");
    scanf("%d%d",&no1,&no2);
    
    printf("Values before swapping %d %d\n",no1,no2);
    no2=no1+no2;
    no1=no2-no1;
    no2=no2-no1;
    
    printf("Values After swapping %d %d \n",no1,no2);
  
  }
