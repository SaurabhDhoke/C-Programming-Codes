  //Use of single-dimensional array
  
  #include<stdio.h>
  int main()
   {
     int marks[200], lc, studs, sum=0;
     float average;
     
     printf("Enter the number of students in class\t");
     scanf("%d",&studs);
     printf("Enter marks of students\n\n");
    
     for(lc=0;lc<studs;lc++)
      {
        printf("Enter marks of student %d\t",lc+1);                      //Reading and storing elements in a 1-D array
        scanf("%d",&marks[lc]);
      }
     for(lc=0;lc<studs;lc++)                                      //Accessing elements stored in the 1-D array
      {
        sum=sum+marks[lc];
      }
      average=(float)sum/studs;
      printf("\nAverage marks of the class is %f",average);
}
