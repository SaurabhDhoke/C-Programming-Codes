 #include<stdio.h>
 int no;
 void fun()
  {
    int i=11;
    int j;
    auto int k;
    auto int l=11;  
  }
  
 void gun()
  {
    register int x=11;
    register int y;  
  }
 
 int main()
  {
    printf("Inside Main");
    fun();
    gun();
    return 0;
  }
