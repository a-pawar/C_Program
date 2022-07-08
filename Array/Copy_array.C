// Write a C program to Copy one array into another array.
#include <stdio.h>
#include <conio.h>
int main()
{
	int num1[20], i, x, num2[20];
	//	clrscr();
	printf("Enter size of array:");
	scanf("%d", &x);
	printf("Enter elements of array:");
	for (i = 0; i < x; i++)
	{
		scanf("%d", &num1[i]);
	}
	printf("\nFirst array: ", num1[i]);
	for (i = 0; i < x; i++)
	{
		printf("%d ", num1[i]);
	}
	printf("\nAfter copy second array: ");
	for (i = 0; i < x; i++)
	{
		num2[i] = num1[i];
		printf("%d ", num2[i]);
	}
	return 0;
}
