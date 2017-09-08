//a022

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int N,M,N2,min;

	scanf("%d %d",&N,&M);
	N2=N;
	min=0;
	while(N2<M)
	{
		min++;
		N2=N2*3;

	}
	printf("%d\n",min);
	return 0;
}