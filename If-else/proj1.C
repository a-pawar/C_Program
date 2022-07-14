//WAP while purchasing certain items , a discount of 10% is offereed if the quantity purchased is more than 1000. if quantity and price per item are input through the keyboard calculate the total expenses.
#include<stdio.h>
#include<conio.h>
int main()
{
	int price,dis,newprice;
	
	printf("Enter the price of item :");
	scanf("%d",&price);

	if(price>1000)
	{
	dis=price*0.10;
	newprice=price-dis;
	printf("price of item is %d",newprice);
	}
	else
	printf("price of item %d",price);

	return 0;
}
