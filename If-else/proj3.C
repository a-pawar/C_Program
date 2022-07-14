//In a company an employee is paid as under : if his basic salary is less than Rs. 1500, then HRA=10% of basic salary and DA = 90% of basic salary. If hsi salary is either equal to or above Rs. 1500,then HRA=Rs. 500 and DA=98% of basic salary . If th employee's salary is entered through the keyboard WAP to find his gross salary.
#include<stdio.h>
#include<conio.h>
int main()
{
	float bs,hra,da,gross_sal;


	printf("Enter the basic salary of employee :");
	scanf("%f",&bs);
	if(bs<1500)
	{
	 hra=bs*0.10;
	 da=bs*0.90;
	 }
	 else
	  {
	  hra=500;
	  da=bs*0.98;
	  }
	  gross_sal=bs+hra+da;
	  printf("gross salary of employee : %f",gross_sal);

	  return 0;
}