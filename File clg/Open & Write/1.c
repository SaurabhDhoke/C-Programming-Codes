
 #include<stdio.h>
  #include<stdlib.h>
 int main()
  {
    FILE *fp;
    fp = fopen("My file","a");
      if(fp==NULL)  
       {
          printf("Can Not Open This File... ");
          exit(0);
       }
    printf("File Open Successfully ... ");
    
    fprintf(fp,"Hi Bro how are you...");
    fclose(fp);
    return 0;
  }
