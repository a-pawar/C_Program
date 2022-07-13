//WAP to convert temp from Centigrade to Fahrenheit.
#include<stdio.h>
#include<conio.h>
int main()
{
	float  cel; // C denotes celcius , F denotes fehrenheit
	float feh;

	printf("Enter the value of temp. in Celcious:\n");
	scanf(" %f", &cel);

	feh = (1.8 * cel)+32;

	printf("Temp.in Fehrenheit: %f ",feh);

	return 0;
	}