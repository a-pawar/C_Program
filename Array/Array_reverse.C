// Write a c program to  Display reverse of array elements.
#include <stdio.h>
#include <conio.h>
int main()
{
	int num[20], i = 0, x = 0;

	printf("Enter size of array: ");
	scanf("%d", &x);
	printf("Enter elements of array: ");
	for (i = 0; i < x; i++)
	{
		scanf("%d", &num[i]);
	}
	printf("\nArray elements:");
	for (i = 0; i < x; i++)
	{
		printf("%d ", num[i]);
	}
	printf("\nReverse of numbers:", num[i]);

	for (i = x - 1; i >= 0; i--)
	{
		printf("%d ", num[i]);
	}
	return 0;
}
