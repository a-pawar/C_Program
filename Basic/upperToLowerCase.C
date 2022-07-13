//WAP to perform operation on entered string single character into upper to lower case
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch,c;
	 
	printf("Enter any alphabate in Upper case:");
	scanf(" %c",&c);

	ch=c+32;

	printf("alphabate in lower case : %c",ch);

	return 0;
	}