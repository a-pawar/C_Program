//The marks obtained by a student in 5 different subjects are input through the keyboard. The Student gets a division as per the following rules:
   //-Percentage above or equal to 60 - first Division
	 //-Percentage between 50 and 59 - second Division
	 //-Percentage between 40 and 49 - Third 'division 
	 //-Percentage less than 40 - Fail
//WAP to calculate and print the total , percentage , division obtained by the student.
#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,n3,n4,n5;
	float per;

	printf("Enter 5 subjects number :\n");
	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);

	per=(n1+n2+n3+n4+n5)/5;

	printf("Percentage = %f\n",per);
	if(per>=60)
	 printf("You are passed in first Division");
	else if(per>=50)
	 printf("You are passed in second division");
	else if(per>=40)
	 printf("You are passed in third division");
	else if(per<40)
	 printf("You are Fail");
	return 0;
	 }