//Write a program to exchange values of following numbers 2 integer numbers without using 3rd variable
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	
	printf("Enter two value : ");
	scanf("%d%d",&a,&b);

	printf("Value of a before swaping :%d\n",a);
	printf("Value of b before swaping :%d\n",b);

	a=a*b;
	b=a/b;
	a=a/b;

	printf("Value of a after swapping :%d\n",a);
	printf("Value of b after swpping  :%d\n",b);

	return 0;
	}
