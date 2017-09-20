/*
making stack by array!
*/

#include <stdio.h>
#include <stdlib.h>

char S[20];
int Top=-1;
int isEmpty();
void push(char);
char pop();

int main()
{
	char item;
	int i,n;
	printf("input a number:\n");
	scanf ("%d",&n);

	printf("Please input the items in order:\n");
	for (i=0;i<n;i++)
	{
		scanf(" %c",&item);
		push(item);	
	}

	printf("=========================\n");

	for (i=0;i<n;i++)
		printf("%c ",S[i]);
	printf("\n");


	printf("=========================\n");

	while(!isEmpty())
	{
		printf("pop:%c\n",pop() );

	} 
	pop();

	return 0;
}

int isEmpty()
{
	if (Top==-1)
		return 1;
	else
		return 0;

}


void push(char item)
{
	if (Top==20)
		printf("Stakc Full\n");
	else
	{
		Top++;
		S[Top]=item;

	}
}

char pop()
{	char item;	
	if (isEmpty())
	{
		printf("Stack Empty!\n");		
	}


	else
	{
		item=S[Top];		
		Top--;
		return item;
	}	
}