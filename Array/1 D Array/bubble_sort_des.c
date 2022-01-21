/* Program Name :- Write A C Programm For Bubble Sort (Desending Order).
   Developer Name :- Dhoke Saurabh 
   Date :- 27/04/2021  */

#include<stdio.h>
#define SIZE 10
int main ()
 {
    int arr[SIZE]={0},temp,i,j;
     for(i=0 ; i<SIZE ; i++)
      {
        printf("Enter Number %d = ",i+1);
        scanf("%d",&arr[i]);
      }
    printf("Before sort \n ");
     for(i=0 ; i<SIZE ; i++)
       printf("%d ",arr[i]);
      
    for(i=0 ; i<SIZE ; i++)
     {
       for(j=i+1 ; j<SIZE ; j++)
        {
           if(arr[i]<arr[j])
            {
              temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
            }
        }
     }
   printf("\n After sort \n ");
     for(i=0 ; i<SIZE ; i++)
        printf("%d ",arr[i]);
        
 return 0;
 }
