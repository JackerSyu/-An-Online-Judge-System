//a032

#include <stdio.h>

int main(int argc, char const *argv[])
{
	char op;
	int a,b;
	scanf("%d%c%d",&a,&op,&b);

	if (op=='+')
		printf("%d\n",a+b);
	else if (op=='-')
		printf("%d\n",a-b);
	else 
		printf("%d\n",a*b);

	return 0;
}