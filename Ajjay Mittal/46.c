 // Find the sum of series 1^2 + 2^2 + 3^2 + … n terms
 //Sum of the given series
 
 #include<stdio.h>
 int main()
  {
    int n, i=1, sum=0;
    printf("Enter the number of terms ");
    scanf("%d",&n);
    
    while(i<=n)
     {
       sum=sum + (i*i);
       i++;
     }
   printf("Sum of series is %d  ",sum);
  }
