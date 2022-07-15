//WAP to print number from 1 to n.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	printf("C program to print number from 1 to n.");
	printf("Enter value of n :");
	scanf("%d",&n);
	printf("\nThe number is :");
	for(i=1;i<=n;i++)
	printf("\n%d",i);
	return 0;
	}