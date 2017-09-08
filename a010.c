//basic code test a010

#include <stdio.h>

int main(void)

{
	int lg,purple,bg,blue;

	scanf("%d",&lg);
	bg=lg+3;
	blue=lg*2-5;
	printf("%d%d\n",blue/10,bg%10);

	return 0;
}