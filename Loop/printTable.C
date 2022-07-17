//WAP to print table of a number.
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,table;
	
	printf("Enter the number to print the table:");
	scanf("%d",&n);

	for(i=1;i<=10;i++)
	{
	table =n*i;
	printf("\n%d*%d = %d",n,i,table);
	}
	return 0;
}