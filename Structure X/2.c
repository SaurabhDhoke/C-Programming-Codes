 #include<stdio.h>
 int main()
  {
    int no= 256;
    char *p = (char*)&no;
   
    printf("%d\n ",*p);
    p++;
    
    printf("%d\n ",*p);
    p++;
    
    printf("%d\n ",*p);
    p++;
    
    printf("%d\n ",*p);
    p++;
    
    return 0;
  }
