//a019

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num1,num2;
	scanf("%d %d",&num1,&num2);

	if(num2==2 || num2==5 || num2==8)
		printf("200\n");
	else if(num1%2!=0)
		printf("100\n");
	else if(num1==num2)
		printf("50\n");
	else 
		printf("0\n");

	return 0;
}