//WAP to calculate (a+b)^2,(a+b)^3,(a-b)^2,(a-b)^3.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,l,m,n,o;
	 
	printf("Enter value of a and b:");
	scanf("%d%d",&a,&b);

	l=a*a+b*b+2*a*b;
	m=a*a*a+b*b*b+3*a*a*b+3*a*b*b;
	n=a*a+b*b-2*a*b;
	o=a*a*a-b*b*b-3*a*a*b+3*a*b*b;

	printf("square of a+b is %d\n",l);
	printf("cube of a+b is %d\n",m);
	printf("square of a-b is %d\n",n);
	printf("cube of a-b is %d\n",o);

	return 0;
}




