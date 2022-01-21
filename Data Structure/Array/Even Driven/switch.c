 
  #include<stdio.h>
  #define SIZE 101
  int main()
   {
     int choice=0,index,value,num,i;
     int arr[SIZE]={0};
     
     while(1)
       {
         printf("\n*******Menue for Array *********\n");  
         puts("1 : Create Array ");
         puts("2 : Insert Element");
         puts("3 : Delete Element");
         puts("4 : Update Array");
         puts("5 : Display Array");
         puts("6 : Exit Programm");
         printf("***********************************\n");
   
         printf("\nEnter Your Choice : ");
         scanf("%d",&choice);
   
         switch(choice)
           {
             case 1 :
                     {
			 printf("Enter how many elements you want in array : ");
		         scanf("%d",&num);
			     
			 if(num<=0 || num>(SIZE-1))
			   {
			     printf("You Enter invalied Elements...");
			     break;
			   }
				 
		        for(i=0;i<num;i++)                                        // Accept values from user & stored it into array
		          {
			    printf("Enter value of arr[%d] : ",i);
			    scanf("%d",&arr[i]);
			  }
			
			printf("\nArray Created Sucessfully...\n");
		        break;
                     }               
    
            case 2 : 
                     {
		       printf("Enter index : ");                                 // Accept Index from user
		       scanf("%d",&index);
		     
		       if(index<0 || index>(num-2))
		         {
			   printf("You Enter invalied Index...\n");
			   break;
		         }
		     
		       printf("Enter Value which you want to insert : ");        //Accept value from user which you want to insert
		       scanf("%d",&value);
		     
		       for(i=(num-1);i>=index;i--)
		        {
			  arr[i+1]=arr[i];     
		        }
		       arr[index]=value;       
		       num++;  
		       
		       printf("\nValue inserted Sucessfully...\n");
		       break; 
                     }
                      
            case 3 : 
                     { 
    		       printf("\nEnter index which you want to delete : ");            // Index from user
		       scanf("%d",&index);
		      
		       if(index<0 || index>num)
		         {
			   printf("You Enter invalied Index...\n");
			   break;
		         }
			 
		      for(i=index;i<=(num-1);i++)
		       {
			 arr[i]=arr[i+1];     
		       } 
		      num--;  
		      
		     printf("\nElement Deleted Sucessfully...\n"); 
		     break;  
                    }

            case 4 : 
                     {
		        printf("\nEnter index : ");                                //Accept Index from user
		        scanf("%d",&index);
		     
		        if(index<0 || index>(num-1))
		         {
			   printf("You Enter invalied Index...\n");
			   break;
		         }
			
		        printf("Enter new Value : ");                             //Accept value from user which you want to update
		        scanf("%d",&value);
		     
		        arr[index]=value; 
		        
		        printf("\nArray updated Sucessfully...\n");    
		      break;    
                     }
                      
            case 5 : 
                     {
                      if(num==0)
                        {
                          printf("\nSorry Sir... First you have to Create Array and Display it \n"); 
                          break;
                        }
                       
                       printf("\nAfter Applying Operations Your Array\n");
			for(i=0;i<num;i++)                                         // Display Array after updating value
		         {
			   printf("arr[%d] : %d  \n",i,arr[i]);
		         }       
		      break; 
                     }
                      
            case 6 : 
                     return 0;
                      break;
           }
         }
 }  
  
  
  
