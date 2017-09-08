//a020

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num1,num2,total;
	scanf("%d %d",&num1,&num2);
	total=0;
	if(num2==2 || num2==5 || num2==8)
	{
		total=total+200;
	}
	if(num1%2!=0)
	{	
		total=total+100;
	}
	if(num1==num2)
	{
	
	total=total+50;
	}
	else 
	{
		total=total+0;
	}
	printf("%d\n",total);

	return 0;
}