#include<stdio.h>
#include<conio.h>
void main()
{
	int p,n;
	float roi,si;
	

	printf("Enter the value of principal : ");
	scanf("%d",&p);
	printf("Enter the value of rate of intrest : ");
	scanf("%f",&roi);
	printf("Enter the value of time : ");
	scanf("%d",&n);

	si=((p*roi*n)/100);

	printf("simple intrest = %f",si);

	getch();
	}