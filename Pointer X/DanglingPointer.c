 /* dangling pointer .
    date : 31.10.2021
 */
  
 #include<stdio.h>
 #include<stdlib.h>
 
 int main()
  { 
    int *p = NULL;
    int *q = NULL;
    
    p = (int*) malloc(sizeof(int) * 5);
    
    /////////////////////
    /////////////////////    code
    ////////////////////  
    ////////////////////   
    
    q = p;
    
    free(p);
    p = NULL;
    
    return 0; 
  }
