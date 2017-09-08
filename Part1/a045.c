/*
Content： 简体中文
對於一個正整數 N 來說，如果它的因數只有 1 和 N 本身，沒有其他的因數，則我們稱它為「質數」。現在給你一個正整數，請你判斷它是不是質數。
Input：
輸入一個正整數 N。
Output：
若 N 為質數，則輸出 YES，否則輸出 NO。
Sample Input：help

輸入1:
5

輸入2:
9
Sample Output ：

輸出1:
YES

輸出2:
NO
Hint ：
可用 sqrt(n) 求 √n 的值。

請 #inlcude ‹cmath› 或 #include ‹math.h›

Author ：
迴圈應用 (管理員：sagit)

reference: http://www.tcgs.tc.edu.tw:1218/
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int num,i,sum=0;

	scanf("%d",&num);

	for (i=1;i<=sqrt(num);i++)
	{
		if(num%i==0)
			sum=sum+i;
	}

	if (sum==1)
		printf("YES\n" );
	else
		printf("NO\n");
	return 0;
}