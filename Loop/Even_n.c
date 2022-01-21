#include<stdio.h>
int main()
{
    int n,i=0;
    printf("Enter number : ");
    scanf("%d",&n); 
    printf("Even numbers upto %d are :\n",n);
      
    while(i<=n)
     {
       if(i%2 == 0)
         {
          printf("%d\n",i);
         }
       i++;     
     }       
    return 0;
}
