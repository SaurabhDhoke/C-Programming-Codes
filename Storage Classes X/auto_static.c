 #include<stdio.h>
 int no;
 void fun()
  {
    auto int i=10;
    i++;
    printf("Value of i from fun : %d \n",i);
  }
  
 void gun()
  {
   static int i=10;
   i++;
   printf("Value of i from gun : %d \n",i);
  }
 
 int main()
  {
    printf("Inside Main \n");
    fun();
    fun();
    fun();
    gun();
    gun();
    gun();
    return 0;
  }
