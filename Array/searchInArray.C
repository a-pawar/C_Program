//Write a C program for Input a number and search that number in a list of 10 elements. If it is found print message “Number is found” otherwise print message “Number is not found”.
#include <stdio.h>
#include <conio.h>
int main()
{
	int num[20], i, n, x, flag = 0;
	// clrscr();
	printf("Enter size of array: ");
	scanf("%d", &x);
	printf("Enter element in array: ");
	for (i = 0; i < x; i++)
	{
		scanf("%d", &num[i]);
	}
	printf("\nEnter number to find: ");
	scanf("%d", &n);
	for (i = 0; i < x; i++)
	{
		if (num[i] == n)
		{
			flag = 1;
		}
	}
	if (flag == 1)
	{
		printf("Number found");
	}
	else
		printf("Number not found");
	return 0;
}