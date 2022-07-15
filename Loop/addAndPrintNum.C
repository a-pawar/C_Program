// WAP to add and print result from numbers from 1 to n.
#include <stdio.h>
#include <conio.h>
int main()
{
	int n, i, add = 0;

	printf("Enter how many number you want to add:");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		add = add + i;
	}
	printf("sum of %d nos:%d", n, add);

	return 0;
}
