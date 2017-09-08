//a033

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number;

	scanf("%d",&number);

	if (number<10)
		printf("|_______%d|\n",number );
	else if(number<100)
		printf("|______%d|\n",number);
	else if (number<1000)
		printf("|_____%d|\n",number );
	else if (number<10000)
		printf("|____%d|\n",number );
	else
		printf("|____%04d|\n",number%10000);
	return 0;
}