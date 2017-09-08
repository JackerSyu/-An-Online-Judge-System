/*a011*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int score;

	scanf("%d",&score);

	if (score<60)
		printf("FAIL\n");
	else
		printf("PASS\n");
	return 0;
}