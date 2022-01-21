/*Algorithm
1.START
2.Accept two integer
3.Accept a choice
4.if choice 1 Perform Addition
4.if choice 2 Perform Substraction
5.if choice 3 Perform Multiplication
6.if choice 4 Perform Division
7.if choice 5 Perform Module
8.STOP
*/
#include<stdio.h>
int main()
{
	int no1=0;
	int no2=0;
	int add,sub,mul,div,mod;
	int choice=0;
	printf("Enter First Number = ");
	scanf("%d",&no1);
	printf("Enter Second Number = ");
	scanf("%d",&no2);
	
	printf("**MENU***\n");
	printf("1.Addition\n");
	printf("2.Substraction\n");
	printf("3.Multiplicaton\n");
	printf("4.Division\n");
	printf("5.Module\n");
	printf("*******\n");
	printf("Enter your choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
				add = no1+no2;
				printf("Addition 	 	= %d\n",add);
				break;
		case 2:
				sub = no1-no2;
				printf("Substraction 	= %d\n",sub);
				break;
		case 3:
				mul = no1*no2;
				printf("Multiplicaton	= %d\n",mul);
				break;
		case 4:
				div = no1/no2;
				printf("Division 		= %d\n",div);
				break;
		case 5:
				mod = no1%no2;
				printf("Module 			= %d\n",mod);
				break;
		
		default:
				printf("Invalid Choice\n");
	}
	return 0;
}
