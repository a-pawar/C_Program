/*WAP to print
	1
 333
55555
*/
#include <stdio.h>
#include <conio.h>
int main()
{
	int num, i, j, k;

	printf("enter the number of rows :");
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= num - i; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= 2 * i - 1; k++)
		{
			printf("%d", 2 * i - 1);
		}
		printf("\n");
	}
	return 0;
}