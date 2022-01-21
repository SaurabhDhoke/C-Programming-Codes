 
 #include<stdio.h>
 int main()
  {
    const int no=10;
    int *ptr=&no;
    int num=0;
   
    printf("Enter New Value which you want to store in no  :  ");
    scanf("%d",&num);
    printf("Value in no before change  : %d\n",*ptr); 
    *ptr=num;
    printf("Value in no after change  : %d ",*ptr);  
  }
