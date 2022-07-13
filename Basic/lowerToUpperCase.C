//WAP to perform operation with entered string single character into lower to upper case
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch,c;
	 
	printf("enter any alphabate :");
	scanf(" %c",&c);

	printf("alphabate in lower case : %c\n",c);

	ch=c-32;

	printf("alphabate in upper case : %c",ch);

	return 0;
	}
