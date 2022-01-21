 
 #include<stdio.h>
  #include<stdlib.h>
 int main()
  {
    FILE *fp;
    char ch;
    
    fp = fopen("My file","r");
      if(fp==NULL)  
       {
          printf("Can Not Open This File... ");
          exit(0);
       }
    //  printf("File Open Successfully in reading mode ...\n");
    while(!feof(fp))
     {
       ch = fgetc(fp);
       printf("%c",ch);
     }
    
    fclose(fp);
    return 0;
  }
