 
 #include<stdio.h>
 #include<stdlib.h>
 
 struct student
  {
    int Roll_no;
    char name[30];
    float per;  
  };
    
 int main()
  {
    struct student s[20];
    FILE *fp;
    int n,i;
    
    fp = fopen("Student Information","wq");
      if(fp==NULL)  
       {
          printf("Unable to Open Requested File... ");
          exit(0);
       }
      printf(" File Open Successfully...\n");
      
    printf("How Many Students Information You Want to Store : ");
    scanf("%d",n);
    
    fprintf(fp,"Roll No \t\t Name \t\t\t persentage \n");
      for(i=0 ; i<n ; i++)
        {
          printf("Enter Roll no OF %d Student : \n",i+1);
          scanf("%d",&s[i].Roll_no);
          fprintf(fp,"%d \t\t\t",s[i].Roll_no);
          
          printf("Enter Name OF %d Student : \n",i+1);
          scanf("%s",&s[i].name);
          fprintf(fp,"%s \t\t\t\t",s[i].name);
          
          printf("Enter Persentage OF %d Student : \n\n",i+1);
          scanf("%d",&s[i].per);
          fprintf(fp,"%f \n ",s[i].per);   
        }
     
     fclose(fp);
       
    return 0;
  }
