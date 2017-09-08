//a029

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num1,num2,i,sum;

	scanf("%d %d",&num1,&num2);
	printf("%d",num1);
	sum=num1;
	num2=num2-num1;
	for(i=0;i<num2;i++)
	{
		num1++;
		printf("+%d",num1);
		sum=sum+num1;
	}


	printf("=%d\n",sum);
	return 0;
}