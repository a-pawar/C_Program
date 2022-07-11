/* WAP for addition,subtraction,multiplication,divsion,modulus of 3 character*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int sum,sub,div,mod;
	long mul1,mul2;
	char var1,var2,var3;
	
	printf("enter first character :");
	scanf(" %c",&var1);
	printf("enter second character :");
	scanf(" %c",&var2);
	printf("Enter third character :");
	scanf(" %c",&var3);

	sum=var1+var2+var3;
	sub=var1-var2-var3;
	mul1=var1*var2;
	mul2=mul1*var3;
	div=var1/var2/var3;
	mod=var1%var2%var3;

	printf("\n%d",sum);
	printf("\n%d",sub);
	printf("\n%ld",mul2);
	printf("\n%d",div);
	printf("\n%d",mod);

	return 0;
	}