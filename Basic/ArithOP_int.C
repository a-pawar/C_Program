/*WAP for addition,subtraction,multiplication,division of 3 integer number*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,sum,sub,mul,div,mod;
	

	printf("enter the first number : ");
	scanf("%d",&n1);
	printf("enter the second numbr : ");
	scanf("%d",&n2);

	sum=n1+n2;
	sub=n1-n2;
	mul=n1*n2;
	div=n1/n2;
	mod=n1%n2;

	printf("\n sum of %d and %d is :%d ",n1,n2,sum);
	printf("\n sub of %d and %d is :%d ",n1,n2,sub);
	printf("\n mul of %d and %d is :%d ",n1,n2,mul);
	printf("\n div of %d and %d is :%d ",n1,n2,div);
	printf("\n mod of %d and %d is :%d ",n1,n2,mod);

	return 0;
	}
