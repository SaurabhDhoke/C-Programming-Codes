/* Program Name :- copy values of 1st structure variable into 2nd structure variable . 
   Developer Name :- Dhoke Saurabh 
   Date :- 02/06/2021  */
   
 #include<stdio.h>
 int main()
  {
    struct emp
     {
       int emp_id;
       char name[10];
     };
    struct emp e1={100,"Ram"};
    struct emp e2 ;
    
    e2 = e1;
    
    printf("EID = %d\t Name = %s \n ",e2.emp_id,e2.name);
    return 0; 
  }
