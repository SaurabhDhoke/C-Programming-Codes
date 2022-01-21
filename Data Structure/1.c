 
 #include<stdio.h>
 int fun();
 int cnt=0;
 int main()
  {
    fun();
    return 0;
  }
  
 int fun()
  {
    printf("%d\n",++cnt);
    return fun();
  }
