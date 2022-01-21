 
 
 #include<stdio.h>
 int main()
  {
    int i=1,n;
    printf("Enter Number : ");
    scanf("%d",&n);
        
       if(n>0)
         {
           printf("Factors of %d are : ",n);
             {
                while(i<=n)
                   {
                     if(n%i==0)
                       {
                         printf("%d ",i);
                       }
                     i++;
                   } 
            }
          }
          
      else
        {
          printf("Factor of 0 is 0 ");
        }
    return 0;
  }
