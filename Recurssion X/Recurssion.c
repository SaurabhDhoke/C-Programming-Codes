 /*
     find power of any number.
     Date : 31.10.2021
 */
 
 #include<stdio.h>
 
//------------------------------------------------------------------------

 int PowerIW(int X , int Y)   // Iteration by While loop
  {
    int iMult = 1;
    
    while(Y != 0)
     {
       iMult = iMult * X;
       Y--;     
     }
    
    return iMult;
  }
  
//------------------------------------------------------------------------

 int PowerIF(int X , int Y)   // Iteration by for loop
  {
    int iMult = 1 , i = 0;
    
    for( i = 1 ; i <= Y ; i++)
     {
       iMult = iMult * X;  
     }
    
    return iMult;
  }

//------------------------------------------------------------------------

 int PowerR(int X , int Y)   // by Recurrsion
  {
    static int iMult = 1;
     
    if(Y != 0)
     {
       iMult = iMult * X;
       Y--; 
       PowerIR(X,Y);        // Recursive call
     }
    
    return iMult;
  }
   
//------------------------------------------------------------------------
  
 int main()
  {
    int no1 = 0 , no2 = 0 , iRet = 0;
    
    printf("Enter Base : ");
    scanf("%d",&no1);
   
    printf("Enter power : ");
    scanf("%d",&no2);    
    
    iRet = PowerIW(no1,no2);
    printf("Result is : %d \n",iRet);
    
    iRet = PowerIF(no1,no2);
    printf("Result is : %d \n",iRet);
    
    iRet = PowerR(no1,no2);
    printf("Result is : %d \n",iRet);
    return 0;
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
