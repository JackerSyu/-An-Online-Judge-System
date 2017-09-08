/*
Content： 简体中文
給你一個正整數 N，請你印出以 1~N 的數字構成的金字塔圖案。
Input：
輸入一個正整數 N (1<=N<=9)，代表要印出的金字塔的高。
Output：
請依照輸出範例的格式，輸出指定高度的數字金字塔。(PS.由於這個系統會吃掉每行前面及後面的空格，故請在每行前面的空格改以 _ 符號輸出。)
Sample Input：help

3
Sample Output ：

__1
_222
33333
Hint ：
Author ：
多重迴圈 (管理員：sagit)

*/

#include <stdio.h>

int main ()
{
	int n,i,j,k;
	
	scanf ("%d",&n);

	for (i=0;i<n;i++)
	{
		for (k=n-i-1;k>0;k--)
			printf("_");
		for (j=1;j<=(1+i*2);j++)
			printf("%d",i+1);
		printf("\n");

	} 

	return 0;
}