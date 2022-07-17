//WAP to print factorial of given number.
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,var,fact;
	
	printf("\nEnter any number :");
	scanf("%d",&fact);
	n=fact;
	var=fact;
	while(fact>1)
	{
	var=var*(fact-1);
	fact=fact-1;
	}
	printf("\nFactorial of %d is %d \n",n,var);
	return 0;
}
