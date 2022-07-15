//WAP to input 5 digit num and perform print reverse of the given number.
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,var=0,rem;
	
	printf("Enter num.:");
	scanf("%d",&n);

	while(n!=0)
	{
	rem=n%10;
	var=var*10+rem;
	n=n/10;

	}
	printf("reverse of a entered no. is :%d",var);

	return 0;
	}