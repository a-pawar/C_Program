// WAP to find prime or not.
#include <stdio.h>
#include <conio.h>
int main()
{
	int i, n, flag = 0;

	printf("Enter number:");
	scanf("%d", &n);

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			printf("Number is not prime");
			flag = 1;
			break;
		}
	}
	if (n == 1)
		printf("Number is not a prime number");
	else if (flag == 0)
		printf("Number is prime number \n");
	return 0;
}