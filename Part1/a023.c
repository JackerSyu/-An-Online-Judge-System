//a023

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number,count=1;

	scanf("%d",&number);


	while(number!=1)
	{
		if(number%2==0)
		{	
			number=number/2;
			count++;
		}
		else
		{	
			number=number*3+1;
			count++;
		}	
	}
	printf("%d\n",count);

	return 0;
}