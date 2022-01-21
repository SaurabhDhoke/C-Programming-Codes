 //Sum of odd numbers 1+3+5+7...+n
 
 #include<stdio.h>
 int main() 
  {
    int n, sum=0, i=1;
    printf("Enter the value of n ");
    scanf("%d",&n);
    
    while(i<=n)
     {
       if(i%2==1)
       sum=sum+i;
       i++; 
     }
   printf("Sum of odd numbers from %d to %d is %d  \n",1,n,sum);
  }
