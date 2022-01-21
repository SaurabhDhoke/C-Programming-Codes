 #include<stdio.h>
 int main()
   {
     int no=1000;
     int *ptr;
     ptr=&no;
     printf("address  of no : %d\n",ptr);
     printf("value of no : %d ",*ptr);
     return 0;
   }
