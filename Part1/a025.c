//a025

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number,inverse,result=0;

	scanf("%d",&number);

	while(number>0)
	{
		result=result*10;
		inverse=number%10;
		number=number/10;
		result=result+inverse;
		


	}
	
	printf("%d\n",result);
	return 0;
}