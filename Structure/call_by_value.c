/* Program Name :- passing structure variable to the function (call by value). 
   Developer Name :- Dhoke Saurabh 
   Date :- 02/06/2021  */
   
 #include<stdio.h>
 void fun(int , int);
 int main()
  {
    struct emp
     {
       int emp_id;
       int emp_phone;
     };
    struct emp e1={100,12345};
    
    fun(e1.emp_id,e1.emp_phone);
    
    return 0; 
  }
void fun(int id , int phone)
 { 
    printf("EID = %d\n ",id);
    printf("phone = %d ",phone);
 }   
    
    
