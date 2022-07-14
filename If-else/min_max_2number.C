//WAP to find out the maximum and minimum number between three numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	
	printf("Enter two number :");
	scanf("%d%d",&a,&b);
  if (a==b)
	{
		printf("Both %d and %d are equal",a,b);
	}
	
	else if(a>b){
	printf("\n%d is max\n",a);
	printf("%d is min",b);
	}
	else{
	printf("\n%d is max\n",b);
	printf("%d is min",a);
	}
	return 0;
	}
