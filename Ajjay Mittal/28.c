 // Logical or operator 
 
 #include<stdio.h>
 int main()
  {
    int i=0,j=1,k=2,l;
    l = (i&&j++)||k++;
    
    printf("REsultant values after evolution are \n");
    printf("%d %d %d %d \n",i,j,k,l);
  }
