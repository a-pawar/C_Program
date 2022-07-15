//WAP to print all odd and even numbers from 1  to n.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	
	printf("Enter how many even/odd number u want to display:");
	scanf("%d",&n);

	printf("\nEven number          Odd number",i,j);
	for(i=0,j=1;i<=n,j<=n;i=i+2,j=j+2)
       {
	printf("\n   %d     \t       %d",i,j);

       }
	return 0;
}

