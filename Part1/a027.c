//a027

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number,i,n;

	scanf("%d",&number);
	n=number;

	for(i=0;i<=n;i++)
		{
			printf("%d ",number);
			number--;
		}
	return 0;
}