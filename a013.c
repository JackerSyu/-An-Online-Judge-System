//a013

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int score;

	scanf("%d",&score);
	if(score<75)
		printf("NO\n");
	else if (score>90)
		printf("NO\n");
	else
		printf("YES\n");
	return 0;
}