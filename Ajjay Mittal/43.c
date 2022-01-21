 //First n perfect numbers
 
 #include<stdio.h>
 int main() 
  {
    int num=1, sum=0, i, count=1, n;
    printf("How many numbers you want to print ");
    scanf("%d", &n);
    printf("Perfect numbers are:\n");
    
    while(count<=n)
     {
       for(i=1;i<num;i++)
        {
          if(num%i==0)
             sum=sum+i;
        }
    
      if(num==sum)
        {
          printf("%d  ",num); 
          count++;
        }
      num++;
      sum=0;
   }
}
