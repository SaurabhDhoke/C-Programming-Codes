/* Program Name :- Write a programm for to print odd numbers from given array.
   Developer Name :- Dhoke Saurabh 
   Date :- 22/04/2021  */

 #include<stdio.h>
 int main ()
  {
   int arr[10]={72,55,19,69,84,65,96,31,84,91};
   printf("The odd numbers are : ");
    for(int i=0;i<=9;i++)
      {
        if(arr[i]%2!=0)
         {
          printf("%d \t",arr[i]);
         }
      }
  return 0;
  }
