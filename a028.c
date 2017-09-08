//a028

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n,r,i,test,sum=1,times;


	scanf("%d %d",&n,&r);
	test=n-r+1;
	times=n-test;
	for (i=0;i<=times;i++)
	{	
		sum=sum*n;
		n--;
	}

	printf("%d\n",sum);
	return 0;
}