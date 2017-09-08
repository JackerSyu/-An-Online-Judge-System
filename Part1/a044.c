/*
對一個正整數 N 而言，將它除了本身以外所有的因數加起來的總和為 S，如果 S>N，則 N 為盈數，如果 S<N，則 N 為虧數，而如果 S=N，則 N 為完全數(Perfect Number)。例如 10 的因數有 1、2、5、10，1+2+5=8<10，因此10 為虧數，而 12 的因數有 1、2、3、4、6、12，1+2+3+4+6=16>12，因此 12 為盈數。至於 6 的因數有 1、2、3、6，1+2+3=6，所以 6 是完全數(它也是第一個完全數)。現在請你一個正整數，請你判斷它是哪一種。
Input：
請入一個正整數 N。
Output：
若輸入的數為盈數，則輸出 Abundant，若輸入的數為虧數，則輸出 Deficient，若輸入的數為完全數，則輸出 Perfect。
Sample Input：help

輸入1:
6

輸入2:
12
Sample Output ：

輸出1:
Perfect

輸出2:
Abundant
Hint ：
Author ：
迴圈應用 (管理員：sagit)
*/

#include <stdio.h>

int main()
{
	int n,i,sum=0;

	scanf("%d",&n);

	for (i=1;i<n;i++)
	{
		if (n%i==0)
			sum=sum+i;
		
	}

	if (sum>n)
		printf("Abundant\n");
	else if (sum<n)
		printf("Deficient\n");
	else
		printf("Perfect\n");

	return 0;


}