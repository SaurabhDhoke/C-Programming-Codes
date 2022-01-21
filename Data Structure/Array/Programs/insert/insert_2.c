   /* Program Name :- Write a programm to insert element into Array .
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
       
    
     for(i=0;i<num;i++)                      // Accept values from user & stored it into array
      {
        printf("Enter value of arr[%d] : ",i);
        scanf("%d",&arr[i]);
      }
     
 
     printf("\nBefore inserting value in Array \n");             // Display our Array before inserting value
     for(i=0;i<num;i++)
      {
        printf("arr[%d] : %d  \n",i,arr[i]);
      }    
     
    
     printf("Enter index : ");             // Index from user
     scanf("%d",&index);
     
     if(index<0 || index>(num-2))
       {
         printf("You Enter invalied Index...");
         return 1;
       }
     
     //Accept value from user which you want to insert
     printf("Enter Value which you want to insert : "); //Accept value from user which you want to insert
     scanf("%d",&value);
     
     for(i=(num-1);i>=index;i--)
      {
        arr[i+1]=arr[i];     
      }
     arr[index]=value;       
     num++;   
     
    
     printf("\nAfter inserting value in Array \n");          // Display our Array after inserting value
     for(i=0;i<num;i++)
      {
        printf("arr[%d] : %d  \n",i,arr[i]);
      }       
       
       
    return 0;
   }
  
  
  
  
  
  
