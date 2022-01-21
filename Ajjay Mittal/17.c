 // Equivalent age in a seconds 
  
  #include<stdio.h>
  int main()
   {
     int age;
     float age_in_sec;
     
     printf("How old are you (Years ?) ");
     scanf("%d",&age);
     
     age_in_sec = 3.156E7*age;
     printf("Age in seconds is %5.2E",age_in_sec);
   } 
