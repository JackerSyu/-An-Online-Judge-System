//a024

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number,sum=0;

	scanf("%d",&number);
	while(number>0)
	{
		sum=sum+number%10;
		number=number/10;

	}

	printf("%d\n",sum);

	return 0;
}