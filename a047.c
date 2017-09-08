/*
Content： 简体中文
給你一個正整數 N，請你印出以 1~N 的數字構成的直角三角形的圖案。
Input：
輸入一個正整數 N (1<=N<=9)，代表要印出的三角形的高。
Output：
請依照輸出範例的格式，輸出指定高度的數字三角形。
Sample Input：help

3
Sample Output ：

1
22
333
Hint ：
Author ：
多重迴圈 (管理員：sagit)
*/

#include <stdio.h>

int main ()
{
	int n,i,j;
	scanf("%d",&n);

	for (i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
			printf("%d",i);
		printf("\n");
	}

	return 0;
}