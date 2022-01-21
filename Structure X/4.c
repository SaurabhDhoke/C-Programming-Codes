
 // Size of empty structure object is 0 byte 

#include<stdio.h>
struct Demo 
{


};
int main()
{
  struct Demo obj;
  
  printf("Size of obj is : %d \n ", sizeof(obj));
}
