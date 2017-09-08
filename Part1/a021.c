
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number;
	scanf(" %d",&number);

	while(number%2==0)
	{

		number=number/2;

	}
	printf("%d\n",number);
	

	return 0;
}