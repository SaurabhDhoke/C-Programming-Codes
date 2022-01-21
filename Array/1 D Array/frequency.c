#include<stdio.h>
#define SIZE 5
int main ()
 {
   int a[SIZE] ;
   int i,j;
     for(i=0;i<=SIZE;i++)
       {
         printf("Enter a number %d : ", i+1);
         scanf("%d",&a[i]);
       }
   printf("\n Array : ");
    for(i=0;i<SIZE;i++)
     {
       printf("%d ",a[i]);
     }
 
    for(i=0;i<=SIZE;i++)  
     {
       int cnt=0;
       for(j=0;j<=SIZE;j++)
        {
          if(a[i]==a[j])
          {
            cnt++;
          }
        }
       printf("\n Frequency of %d : %d ",a[i],cnt);
       
     }   
 return 0;    
 }
