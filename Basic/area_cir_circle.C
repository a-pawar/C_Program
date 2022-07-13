//WAP to calcutate Area and circumference of rectangle.
#include<stdio.h>
#include<conio.h>
int main()
{
	float r,area,cir;
	 
	printf("Enter the radius of circle : ");
	scanf("%f",&r);

	area=(3.14*r*r);
	cir=(2*3.14*r);

	printf("Area of circle : %f\n",area);
	printf("Circumfrence of circle : %f ",cir);

	return 0;
	}

