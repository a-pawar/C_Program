//The current year and the year in which the employee joined the organization are entered through keyboard.If the number of years for which the employee has served the organization is greater than 3 then a bonus of Rs.2500/- is given to the employee. If the years of service are not greater than 3, then program should not do anything.
#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,total;

	printf("Enter your joining year : ");
	scanf("%d",&x);
	printf("Enter current year :");
	scanf("%d",&y);
	total=y-x;
	if(total>3)
	printf("\nyou are awarded bonus of 2500");
	else
	printf("\nGood by!!");

	return 0;
	}




