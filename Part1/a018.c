//a018

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int hour,min;

	scanf("%d %d",&hour,&min);
	
	if (hour==14 && min>=20 && min<60)
		printf("YES\n");
	else if(hour==15 && min>=0 &&min<60)
		printf("YES\n");
	else if(hour==16 && min<=40 &&min>=0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}