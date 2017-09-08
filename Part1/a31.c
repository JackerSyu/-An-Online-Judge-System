//a031

#include <stdio.h>

int main(int argc, char const *argv[])
{
	long long int A,B,total;

	scanf("%lld %lld",&A,&B);

	if (A>B)
		printf("A %lld\n",A+B);
	else
		printf("B %lld\n",A+B);

	return 0;
}