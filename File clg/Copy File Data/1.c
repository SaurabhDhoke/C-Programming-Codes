 
 #include<stdio.h>
  #include<stdlib.h>
 int main()
  {
    FILE *fp1, *fp2;
    char ch;
    
    fp1 = fopen("My file","r");
      if(fp1==NULL)  
       {
          printf("Can Not Open 1st File... ");
          exit(0);
       }
      printf("1st File Open Successfully...\n");
      
    fp2 = fopen("Demo File","w");
      if(fp2==NULL)  
       {
          printf("Can Not Open 2nd File... ");
          exit(0);
       }
      printf("2nd File Open Successfully...\n");
      
    while(!feof(fp1))
     {
       ch = fgetc(fp1);
       fputc(ch,fp2);
     }
    
    fclose(fp1);
    fclose(fp2);
    
    printf("File Has Been Copied Successfully...");
    return 0;
  }
