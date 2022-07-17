//WAP to print all prime number from 1 to 500.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,num,flag;
	
	printf("Prime number from 1 to 500: ");

	for(num=1;num<=500;num++)
	{ flag=0;
	 for(i=2;i<=num/2;i++)
	 {
	  if(num%i==0)
	  {
	  flag=1;
	  break;
	  }
	 }
	if(flag==0&&num!=1)
	 {
	  printf("%d   ",num);
	 }
	}
  return 0;
}