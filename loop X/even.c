 
  #include<stdio.h>
  #include<stdbool.h>
  bool CheckEven(int iNo)
   {
     if((iNo % 2) == 0)
      {
        return true;
      }
     else
      {
        return false;
      }
   }
  
  int main()
  {
    int iValue = 0;
    bool  bRet = false;
    
    printf("Enter number \n");
    scanf("%d",&iValue);
    
    bRet = CheckEven(iValue);
    if(bRet == true)
     {
       printf("Number is Even \n");
     }
    else
     {
       printf("Number is not Even\n");
     }
    return 0;
  }
