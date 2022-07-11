#include <stdio.h>
#include <conio.h>
#include<math.h>
int main()
{
	int p, t, n;
	float roi, si, ci,amount;

	printf("Enter the value of principal : ");
	scanf("%d", &p);
	printf("Enter the value of rate of intrest : ");
	scanf("%f", &roi);
	printf("Enter the value of time : ");
	scanf("%d", &t);
	

	amount = p * (pow(( 1 + roi /100) , t));
	ci=amount-p;
	printf("simple intrest = %f", ci);

	return 0;
}