//WAP using conditional operator   the character entered is in which case. 
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter any character :");
	scanf("%c",&ch);
 
	if(ch>=65 && ch<=90)
	  printf("UPPER CASE");
	else if(ch>=97 && ch<=122)
	  printf("LOWER CASE");
	else if(ch>=48 && ch<=57)
	  printf("NUMBER");
	else
	  printf("SPECIAL SYMBOL");

	 return 0;
	 }