//a016

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int sit1,sit2,sit3,sit4,year;

	scanf("%d",&year);
	sit1=year%4;
	sit2=year%100;
	sit3=year%400;
	if(sit1!=0)
		printf("NO\n");
	else if(sit1==0 && sit2!=0)
		printf("YES\n");
	else if(sit3==0)
		printf("YES\n");
	else if(sit2==0 && sit3!=0)
		printf("NO\n");


	return 0;
}