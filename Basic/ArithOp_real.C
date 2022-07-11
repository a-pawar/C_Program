/* WAP for addition,subtraction,multiplication,divsion,modulus of 3 real number*/
#include<stdio.h>
#include<conio.h>
int main()
{
	float n1,n2,n3,sum,sub,mul,div;
	clrscr();
	printf("Enter the first number: ");
	scanf("%f",&n1);
	printf("Enter the second number: ");
	scanf("%f",&n2);
	printf("Enter the third number: ");
	scanf("%f",&n3);

	sum=n1+n2+n3;
	sub=n1-n2-n3;
	mul=n1*n2*n3;
	div=n1/n2/n3;

	printf("\nsum of number :%f",sum);
	printf("\nsub of number :%f",sub);
	printf("\nmul of number :%f",mul);
	printf("\ndiv of number :%f",div);

	return 0;
	}



