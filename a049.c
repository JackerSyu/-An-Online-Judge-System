/*
Content： 简体中文
給你一個正整數 N，請你印出 NxN 的斜紋地磚花色。
Input：
輸入一個正整數 N，代表地磚一邊的長。
Output：
請依照輸出範例的格式，輸出 NxN 的斜紋地磚的花色。

註：斜紋地磚的花色是這樣的，首先左上到右下的這條對角線上的每一格都是 @ 符號，而將這條對角線向左及向右平移三格，也就是間隔兩格之後的線上的圖案也是 @，再繼續向兩旁反覆，直到超出地磚的範圍為止，而不是 @ 圖案的地方，則是以 - 符號表示。

Sample Input：help

9
Sample Output ：

@--@--@--
-@--@--@-
--@--@--@
@--@--@--
-@--@--@-
--@--@--@
@--@--@--
-@--@--@-
--@--@--@
Hint ：
Author ：
多重迴圈 (管理員：sagit)
*/

#include <stdio.h>

int main()
{
	int n,i,j;

	scanf("%d",&n);

	for (i=1;i<=n;i++)//層數
	{
		if ((i-1)%3==0)//lever 1
		{

			for (j=1;j<=n;j++)//個數
				if((j-1)%3==0)
					printf("@");
				else 
					printf("-");
			printf("\n");
		}
		else if((i-1)%3==1)//level 2
		{
			for (j=1;j<=n;j++)//個數
				if((j-1)%3==1)
					printf("@");
				else 
					printf("-");
			printf("\n");
		}
		else //level 3
		{
			for (j=1;j<=n;j++)//個數
				if(j%3==0)
					printf("@");
				else 
					printf("-");
			printf("\n");
		}
	}

	return 0;
}