  /* Program Name :- Write a programm to Delete Element from Array .
   Developer Name :- Dhoke Saurabh 
   Date :- 24/07/2021  */
 
  #include<stdio.h>
  #define SIZE 101
  int main()
   {
     int arr[SIZE]={0};
     int index,value,num,i;
     
     printf("Enter how many elements you want in array : ");
     scanf("%d",&num);
     
     if(num<=0 || num>(SIZE-1))
       {
         printf("You Enter invalied Elements...");
         return -1;
       }
       
    
     for(i=0;i<num;i++)                                   // Accept values from user & stored it into array
      {
        printf("Enter value of arr[%d] : ",i);
        scanf("%d",&arr[i]);
      }
     
    
     printf("\nBefore Deleting value from Array \n");      // Display our Array before inserting value
     for(i=0;i<num;i++)
      {
        printf("arr[%d] : %d  \n",i,arr[i]);
      }    
     
   
     printf("\nEnter index which you want to delete : ");     // Index from user
     scanf("%d",&index);
     
     if(index<0 || index>num)
       {
         printf("You Enter invalied Index...");
         return 1;
       }
         
     for(i=index;i<=(num-1);i++)
      {
        arr[i]=arr[i+1];     
      }
         
     num--;   
     
  
     printf("\nAfter Deleting value from array \n");           // Display our Array after deleting value
     for(i=0;i<num;i++)
      {
        printf("arr[%d] : %d  \n",i,arr[i]);
      }       
       
       
    return 0;
   }
  
  
  
  
  
  
