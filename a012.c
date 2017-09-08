/*a012*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number;

	scanf("%d",&number);
	if(number%2==0)
		printf("EVEN\n");
	else
		printf("ODD\n");
	return 0;
}