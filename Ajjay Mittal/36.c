  //Even or odd without using modulus operator
  #include<stdio.h>
  int main()
   {
    int num;
    printf("Enter the number\t");
    scanf("%d",&num);
    
    if((num&1)==0)
      printf("Number %d is even",num);
    else
      printf("Number %d is odd",num);
   }
