/* Program Name :- Write a programm for to print Even numbers from given array.
   Developer Name :- Dhoke Saurabh 
   Date :- 22/04/2021  */

 #include<stdio.h>
 int main ()
  {
   int arr[10]={12,15,99,61,84,65,96,34,84,66};
   printf("The Even numbers are : ");
    for(int i=0;i<=9;i++)
      {
        if(arr[i]%2==0)
         {
          printf("%d \t",arr[i]);
         }
      }
  return 0;
  }
