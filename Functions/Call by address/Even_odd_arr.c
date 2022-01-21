/* Program Name :- Write a c program for no is Even or Odd by passing array to the function all values at a time by using array notation .
   Developer Name :- Dhoke Saurabh 
   Date :- 14/05/2021  */

#include<stdio.h>
#define SIZE 5
int EVEN_Odd(int*,int);                                 // Function declaration
int main ()
  {
    int arr[SIZE]={15,24,36,14,75};
    EVEN_Odd(arr,SIZE);                    // Call    // Actual parameter 
    return 0;
  }
int EVEN_Odd(int arr[],int size)                                    // Function Header
 {  
   for(int i=0;i<size;i++)
     {
       if(arr[i]%2 == 0)                        
          printf("%d is Even number\n",arr[i]); 
       else
          printf("%d is Odd number\n",arr[i]);
     }
 }
