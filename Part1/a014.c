//a014

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int price1,price2,price3;
	scanf("%d %d %d",&price1,&price2,&price3);

	if (price1>price2)
		if(price2>price3)
			printf("%d\n",price3);
		else
			printf("%d\n",price2);
	else
		if(price1>price3)
			printf("%d\n",price3);
		else
			printf("%d\n",price1);
	return 0;
}