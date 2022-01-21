 
 #include<stdio.h>
 #define SIZE 101
 int main()
  {
    int arr[SIZE]={0};
    int num=0,i=0;
    
    printf("Enter Size of array which you want : ");
    scanf("%d",&num);
    
    if(num<=0 || num>SIZE)
     {
       printf("You Entered Invalied Input...");
       return -1;     
     }
    
    for(i=0;i<num;i++)
     {
       printf("Enter Element %d : ",(i+1));
       scanf("%d",&arr[i]);  
     }
  
    printf("Your Array : ");
      for(i=0;i<num;i++)
       {
         printf("%d  ",arr[i]);
       }
  
    return 0; 
  }
