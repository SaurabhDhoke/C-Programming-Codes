 // find area  & circumferrence of circle with radius r
 
 #include<stdio.h> 
 int main()
  {
    float r,circm,area;
    printf("Enter Radius of a circle : ");
    scanf("%f",&r);  
    
    circm=2*3.14*r;
    area=3.14*r*r;
    
    printf(" Cirumferrance of circle is %6.2f\n",circm);
    printf(" Area of circle is %.2f\n",area);
  }
