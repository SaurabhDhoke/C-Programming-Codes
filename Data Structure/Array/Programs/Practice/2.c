  
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
  
    printf("Your array before inserting value : \n");
      for(i=0;i<num;i++)
       {
         printf("arr[%d] : %d\n",i,arr[i]);
       }
    
    printf("Enter index : ");
    scanf("%d",&index);
    
    if(index<0 || index>(num-2))
     {
       printf("You Entered invalied index ...");
       return -1;     
     }
     printf("Enter Value which you want to insert : ");
     scanf("%d",&value);
    
    for(i=(num-1);i>=index;i--)
     {
       arr[i+1]=arr[i];
     }
    arr[index]=value;
    num++;
    
    printf("Your array After inserting value : \n");
     for(i=0;i<num;i++)
      {
        printf("arr[%d] : %d\n",i,arr[i]);
      }
      
    return 0; 
  }
