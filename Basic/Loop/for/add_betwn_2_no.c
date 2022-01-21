 #include<stdio.h>
 int main()
  {
    int a,b,i,sum=0;
    printf("Enter two Numbers: ");
    scanf("%d%d",&a,&b);
    
    for(i=a;i<=b;i++)
     {
       sum=sum+i;
     }  
    printf("Addition of numbers between %d & %d is : %d ",a,b,sum);
    return 0;
  }
