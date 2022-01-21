  /* Program Name :- Write a programm to update Array .
   Developer Name :- Dhoke Saurabh 
   Date :- 25/07/2021  */

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
         
     for(i=0;i<num;i++)                                        // Accept values from user & stored it into array
      {
        printf("Enter value of arr[%d] : ",i);
        scanf("%d",&arr[i]);
      }
     
     printf("\nBefore inserting value in Array \n");          // Display our Array before updating value
     for(i=0;i<num;i++)
      {
        printf("arr[%d] : %d  \n",i,arr[i]);
      }    
     
     printf("\nEnter index : ");                                //Accept Index from user
     scanf("%d",&index);
     
     if(index<0 || index>(num-1))
       {
         printf("You Enter invalied Index...");
         return 1;
       }
        
     printf("Enter new Value : ");                             //Accept value from user which you want to update
     scanf("%d",&value);
     
     arr[index]=value;         
     
     printf("\nAfter update value in Array \n");            // Display Array after updating value
     for(i=0;i<num;i++)
      {
        printf("arr[%d] : %d  \n",i,arr[i]);
      }       
         
    return 0;
   }
  
  
  
  
  
  
