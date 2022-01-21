 // simple interest 
 
 #include<stdio.h>
 int main()
  {
    float p,roi,i,t,amt;
    printf("Enter Principal rate and time ");
    scanf("%f%f%f",&p,&roi,&t);
    
    i=(p*roi*t)/ 100;
    amt= p+i;
    
    printf("Interest is %.2f\n",i);
    printf("Amount is %.2f\n ",amt); 
  } 
