   /* Program Name :- Write a programm to insert element into Array .
   Developer Name :- Dhoke Saurabh 
   Date :- 24/07/2021  */

 #include<stdio.h>
 int main()
  {
    int arr[5]={10,20,30,40};
    int index,value,i;
    
    printf("Enter index : ");
    scanf("%d",&index);
    
    if(index<0 || index>(4-1))
      {
        printf("You Enter Invalied index...\n");
        return -1;
      }  
  
    printf("Enter Value which you want to add : ");
    scanf("%d",&value);
    
    printf("\nBefore insert Value : \n");
    for(i=0;i<5;i++)
    {
      printf("arr[%d] : %d\n",i,arr[i]); 
    }
    
   for(i=(5-1) ; i>=index ; i--)
    {
      arr[i+1]=arr[i];
    }
    arr[index]=value;
    
   printf("\nAfter insert Value : \n"); 
   for(i=0;i<5;i++)
    {
      printf("arr[%d] : %d\n",i,arr[i]); 
    }
    return 0;
  }
