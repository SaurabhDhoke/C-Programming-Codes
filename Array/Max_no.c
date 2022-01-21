#include<stdio.h>

int main()
{
   int num,great,loop = 0,runner,i=0;
   printf("ENTER NUM = ");
   scanf("%d",&num);

   runner=num;
   int arr[num];
   
   for(int i=0;i<=num;i++)
    {
    printf("ENTER NUMBER %d =",i);
    scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<=num;i++)
    {
    printf("%d -> ",arr[i]);
    }
    
    great=arr[0];
    i = 0;
   
    while(loop <= runner)
    {
      if(arr[i] > great)
      {
        great = arr[i];
       }    
      
      i++,loop++;
    }
    printf("\nThe Greatest No: %d \n",great);
    return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
