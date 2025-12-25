#include<stdio.h>
int main()
{
	int p,st,totalprice;
	printf("Enter a price of a product");
	scanf("%d",&p);
	printf("Enter a sales tex");
	scanf("%d",&st);
	totalprice = (p*st/100)+p;
	printf("%d\n",totalprice);
}
