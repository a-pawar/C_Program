//Write a C program to Print the sum of first and last index element.
#include<stdio.h>
#include<conio.h>
int main()
{
	int num[20],i,sum=0,x;
	//clrscr();
	printf("Enter size of array: ");
	scanf("%d",&x);
	printf("Enter elements of array :");
	for(i=0;i<x;i++)
	{
	scanf("%d",&num[i]);
	}
	for(i=0;i<x;i++)
	{
	sum=num[0]+num[x-1];
	}
	printf("Sum of first and last digit number=%d",sum);
	return 0;
	}