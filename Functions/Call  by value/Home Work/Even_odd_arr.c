/* Program Name :- Write a c program for no is Even or Odd by passing array to the function one value at a time .
   Developer Name :- Dhoke Saurabh 
   Date :- 14/05/2021  */

 #include<stdio.h>
 #define TRUE 1
 #define FALSE 0
 int EVEN_Odd(int);                                 // Function declaration
 int main ()
  {
    int arr[5]={15,24,36,14,75},result;
    
    for(int i=0;i<5;i++)
     {
       result = EVEN_Odd(arr[i]);     
       if(result == TRUE)                            // Call
       printf("%d is Even number\n",arr[i]); 
       else
       printf("%d is Odd number\n",arr[i]);
     }
   return 0;
  }
 int EVEN_Odd(int no)                                    // Function Header
 {  
   if(no%2 == 0)                                      // Body
    return TRUE;
   else
   return FALSE ;
 }
