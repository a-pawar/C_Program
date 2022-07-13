//WAP to display square and cube of a number.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,x,y;
	
	printf("Enter any number:");
	scanf("%d",&a);

	x=a*a;
	y=a*a*a;

	printf("Square of %d is %d\n",a,x);
	printf("cube of %d is %d",a,y);

	return 0;
	}
