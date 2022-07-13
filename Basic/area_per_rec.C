//WAP to calculate Area and perimeter of rectangle.
#include<stdio.h>
#include<conio.h>
int main()
{ 
	int l,w,area,per;  //l is length , w is width ,per is perimeter of rectangle


	printf("Enter the length of rectangle : ");
	scanf("%d",&l);
	printf("Enter the width of rectangle : ");
	scanf("%d",&w);

	area=(l*w);
	per=(2*(l+w));

	printf("Area of rectangle : %d\n",area);
	printf("Perimeter of rectangle : %d\n",per);

	return 0;
	}
