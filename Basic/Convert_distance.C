//WAP to convert and print this distance of 2 cities in m,feet,inch,cm.
#include<stdio.h>
#include<conio.h>
int main()
{
	float km ,m, cm,feet,inch;
	 
	printf("Enter distance of two cities in km:");
	scanf("%f",&km);

	m=km*1000;
	cm=km*100*1000;
	feet=km*3280.84;
	inch=km*39370.1;

	printf("value in m is %f\n",m);
	printf("value in cm is %f\n",cm);
	printf("value in feet is %f\n",feet);
	printf("value in inch is %f\n",inch);
	return 0;
	}

