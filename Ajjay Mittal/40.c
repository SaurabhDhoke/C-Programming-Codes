 // Reverse of a given number 
 
 #include<stdio.h>
 int main()
  {
    int num,rev=0,digit;
    printf("Enter the number ");
    scanf("%d",&num);
    
    while(num!=0)
     {
       digit = num%10;
       num   = num/10;
       rev   = rev*10+digit;         
     }
    printf(" Reverse is %d ",rev);
  }
