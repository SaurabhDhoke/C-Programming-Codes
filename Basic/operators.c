/*Algorithm
1.START
2.Accept two integer
3.Perform Addition
4.Perform Substraction
5.Perform Multiplication
6.Perform Division
7.Perform Module
8.STOP
*/
#include<stdio.h>
int main()
{
	int no1=0;
	int no2=0;
	printf("Enter First Number = ");
	scanf("%d",&no1);
	printf("Enter Second Number = ");
	scanf("%d",&no2);
	
	printf("Addition 	  = %d\n",no1+no2);
	printf("Substraction 	  = %d\n",no1-no2);
	printf("Multiplicaton	  = %d\n",no1*no2);
	printf("Division 	  = %d\n",no1/no2);
	printf("Module           = %d\n",no1%no2);
	return 0;
}
