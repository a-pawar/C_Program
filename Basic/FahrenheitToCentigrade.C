//WAP to convert temperature from Fahrenheit to Centigrade.
#include<stdio.h>
#include<conio.h>
int main()
{
	float fah,cel;
	
	printf("Enter the temp. in Fahrenheit :");
	scanf("%f",&fah);
	cel=(fah-32.0)*0.556;
	printf("Temp. in celcious:%f",cel);
	return 0;
	}

