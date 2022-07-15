//WAP to input 5 digit and perform sum of the first and last digit of this number.
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,sum=0,firstdigit,lastdigit;
	
	printf("Enter any number to find sum of first and last digit:");
	scanf("%d",&num);

	lastdigit = num%10;

	firstdigit=num;

	while(num>=10)
	{
	  num=num/10;
	}
	firstdigit = num;

	sum = firstdigit+lastdigit;

	printf("Sum of first and last digit %d",sum);

	return 0;
	}