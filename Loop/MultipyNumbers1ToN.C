//WAP to Multiply and print result from numbers from 1 to n;
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,mul=1;
	
	printf("Enter how many number you want to multiply : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	mul=mul*i;
	printf("the Muliplication of %d natural number is=%u",n,mul);

	return 0;
}
