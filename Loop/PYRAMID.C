/*WAP to print
	1
 222
33333
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
			printf("%d", i);
		}
		printf("\n");
	}
	return 0;
}
