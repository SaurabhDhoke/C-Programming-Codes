/* Program Name :- Write a c program for no is Even or Odd  .
   Developer Name :- Dhoke Saurabh 
   Date :- 9/05/2021  */

 #include<stdio.h>
 #define TRUE 1
 #define FALSE 0
 int EVEN_Odd(int);                                 // Function declaration
 int main ()
  {
    int no,result;
    printf("Enter Number : ");
    scanf("%d",&no);
   
    
    result = EVEN_Odd(no);     
     if(result == TRUE)                            // Call
       printf("%d is Even number ",no); 
     else
       printf("%d is Odd number",no);
    return 0;
 }
 int EVEN_Odd(int no)                                    // Function Header
 {  
   if(no%2 == 0)                                      // Body
    return TRUE;
   else
   return FALSE ;
 }
