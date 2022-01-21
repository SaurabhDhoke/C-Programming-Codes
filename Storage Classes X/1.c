 #include<stdio.h>

 void fun()
  {
    auto int no=10;
    printf("Address of no : %d \n\n",&no);
    return;
  }
  
 int main()
  {
    fun();
    fun();
    fun();
    fun();
    fun();
    return 0;
  }
