 // Find the sum of series 1+1/2+1/3+… n terms
 // Sum of the given series
 
 #include<stdio.h>
 int main()
  {
    int n, i=1;
    float sum=0;
    printf("Enter the number of terms ");
    scanf("%d",&n);

    while(i<=n)
     { 
       sum=sum + 1/(float)i;
       i++;
     }
    printf("Sum of series is %f  ",sum);
  }
