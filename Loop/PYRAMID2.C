/*WAP to print
   1
  22
 333
4444
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int num,i,j,k;

	printf("Enter the number of rows");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
	 for(j=1;j<=num-i;j++)
	 {
	 printf(" ");
	 }
	 for(k=1;k<=i;k++)
	 {
	 printf("%d",i);
	 }
	 printf("\n");
	 }
	 return 0;
}