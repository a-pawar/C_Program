//WAP to input 5 digit num and sum of the digits of the number
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,var=0,rem;
	

	printf("Enter an 5 digite number : ");
	scanf("%u",&num);

      //	for(i=1;i<=num;i++)
      while(num!=0)
	{
	rem=num%10;
	var=var+rem;
	num=num/10;
	}
	printf("Sum of digites is %d\n",var);
	return 0 ;
	}