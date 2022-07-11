//Write a program to exchange values of following numbers 2 integer numbers using 3rd variable
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	
	printf("Enter two values : ");
	scanf("%d%d",&a,&b);

	printf("value of a before swapping = %d\n",a);
	printf("value of b before swapping = %d\n",b);

	c=a;
	a=b;
	b=c;

	printf("value of a after swapping = %d\n",a);
	printf("value of b after swapping = %d\n",b);
	return 0;
	}