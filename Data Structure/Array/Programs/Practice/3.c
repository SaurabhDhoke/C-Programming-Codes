  
 #include<stdio.h>
 #define SIZE 101
 int main()
  {
    int arr[SIZE]={0};
    int num=0,i=0,index=0,value=0;
    
    printf("Enter Size of array which you want : ");
    scanf("%d",&num);
    
    if(num<=0 || num>=SIZE)
     {
       printf("You Entered Invalied Input...");
       return -1;     
     }
    
    for(i=0;i<num;i++)
     {
       printf("Enter Element %d : ",(i+1));
       scanf("%d",&arr[i]);  
     }
  
    printf("Your array before Deleting index : \n");
      for(i=0;i<num;i++)
       {
         printf("arr[%d] : %d\n",i,arr[i]);
       }
    
    printf("Enter index : ");
    scanf("%d",&index);
    
    if( index<0 || index>num )
     {
       printf("You Entered invalied index ...");
       return -1;     
     }
    
    for(i=index ;i<=(num-1);i++)
     {
       arr[i]=arr[i+1];
     }
    num--;
    
    printf("Your array After Deleting index : \n");
     for(i=0;i<num;i++)
      {
        printf("arr[%d] : %d\n",i,arr[i]);
      }
      
    return 0; 
  }
