#include<stdio.h>
void main()
{
	int qty,dis=0;
	float Total,rate ;

	printf("\n Quantity of item = ");
	scanf("%d" ,&qty);

	printf("\n Rate of item =");
	scanf("%f" ,&rate);

	if(qty>1000)
	dis=10;
	Total=(qty*rate)-(qty*rate*dis/100);
	printf("Total expenses=Rs. %f" ,Total);
}


