//WAP to calculate Area of triangle.
#include<stdio.h>
#include<conio.h>
int main()
{
	float height,base,area;
	
	printf("Enter the value of height : ");
	scanf("%f",&height);
	printf("Enter the value of base : ");
	scanf("%f",&base);

	area=(0.5*(base*height));

	printf("Area of triangle = %f",area);

	return 0;
	}