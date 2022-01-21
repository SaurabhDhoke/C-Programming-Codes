  
 #include<stdio.h>
 int main()
  {
    int num=0,i=0,j=0;
    int pass=0,noc=0,temp=0;
    int flag=0;
    printf("Enter Size of array which you want : ");
    scanf("%d",&num);
    
    if(num<=0 )
     {
       printf("You Entered Invalied Input...");
       return -1;     
     }
    
    int arr[num];  
    for(i=0;i<num;i++)
     {
       printf("Enter Element %d : ",(i+1));
       scanf("%d",&arr[i]);  
     }
  
    printf("Your array Sorting : \n");
      for(i=0;i<num;i++)
       {
         printf("arr[%d] : %d\n",i,arr[i]);
       }
    
   
    
    for(i=0;i<(num-1);i++)
     {
       pass++;
       flag=0;
       for(j=0; j<(num-1); j++)
        {
          noc++;  
          if(arr[j] > arr[j+1])
            {
              temp    = arr[j];
              arr[j]  = arr[j+1];
              arr[j+1]= temp; 
              flag=1;
            }
        }
       if(flag==0)
        {
          break;
        }          
     }
     
    printf("Your array After Sorting : \n");
     for(i=0;i<num;i++)
      {
        printf("arr[%d] : %d\n",i,arr[i]);
      }
 
    printf("\nTotal Pass : %d\n",pass);
    printf("Number of Comparisons : %d\n",noc);
    return 0; 
  }
  
  
  
  
