/* Program Name :- passing structure variable to the function (call by address). 
   Developer Name :- Dhoke Saurabh 
   Date :- 02/06/2021  */
   
 #include<stdio.h>
 struct emp
     {
       int emp_id;
       int emp_phone;
     };
     
 void fun(struct emp*);
 int main()
  {
    struct emp e1={100,12345};
    fun(&e1);
    
    return 0; 
  }
 void fun(struct emp *e)
  { 
    printf("EID = %d\n ",e->emp_id);
    printf("phone = %d ",e->emp_phone);
  }   
    
    
