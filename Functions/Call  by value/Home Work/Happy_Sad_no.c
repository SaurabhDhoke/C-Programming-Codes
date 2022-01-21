/* Program Name :- Write a c program to check entered number is Happy or Sad by function (genric function) .
   Developer Name :- Dhoke Saurabh 
   Date :- 13/05/2021  */

#include<stdio.h>
#define TRUE 1
#define FALSE 0
int happy(int);
int main()
 {
	int no=0,ret;
	printf("Enter Number = ");
	scanf("%d",&no);
	
	ret = happy(no);
	if(ret==TRUE)
		printf("%d is Happy Number",no);
	else
		printf("%d is Sad Number",no);

	return 0;
 }
int happy(int no)
 {
    int sum = 0,digit;
	do
	 {
          sum = 0;
	    do
	     {
		digit = no%10;
		sum   = sum + (digit * digit); 
		no    = no / 10;
	     }
	    while(no!=0);
	    no = sum;
	}
	while(sum>9);
	if(sum==1)
	  return TRUE;
	else
	  return FALSE;
 }
