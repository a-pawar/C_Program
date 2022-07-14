// If the cost price and selling price of an item is input through the keyboard,WAP to determine whether the sseller has made profit or incurred loss. Also determine how much profit he has made or loss he incurred.

#include <stdio.h>
#include <conio.h>
int main()
{
	int cp, sp, var;

	printf("Enter cost price of an item:");
	scanf("%d", &cp);
	printf("Enter selling price of an item:");
	scanf("%d", &sp);

	if (sp > cp)
	{
		printf("\nSeller has made profit");
		var = sp - cp;
		printf("\nSeller has earned %d rs as profit", var);
	}
	else if (cp > sp)
	{
		printf("\nSeller has made loss");
		var = cp - sp;
		printf("\nSeller has suffered  %d rs as loss", var);
	}
	else
		printf("\nSeller has no profit no loss");
	return 0;
}
