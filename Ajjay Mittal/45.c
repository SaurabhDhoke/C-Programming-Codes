  // Find the sum of series 1+(1+2)+ (1+2+3) +(1+2+3+4)… n terms
  //Sum of the given series
  
  #include<stdio.h>
  int main()
   {
     int num, i=1, j, sum=0; 
     printf("Enter the number of terms ");
     scanf("%d",&num);

     while(i<=num)
      {
        j=1;
        while(j<=i)
         {
           sum=sum+j;
           j++;
         }
        i++;
      }
     
     printf("Sum of the series is %d", sum);
}
