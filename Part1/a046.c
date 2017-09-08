/*

Content： 简体中文
自由巧克力工廠以生產長條形的巧克力的效率而聞名，不管客戶要求的尺寸是多少，總是能在最短時間內將巧克力生產出來。現在給你客戶要求的寬和高，你也能馬上生產出該尺寸的巧克力嗎？
Input：
輸入兩個正整數 W、H，代表所要求的巧克力的寬和高。
Output：
請輸出巧克力的形狀，中間的花色請以 # 符號取代之。
Sample Input：help

3 2
Sample Output ：

###
###
Hint ：
Author ：
多重迴圈 (管理員：sagit)

*/

#include <stdio.h>

int main()
{
	int w,h,i,j;

	scanf("%d %d",&w,&h);
	for (j=0;j<h;j++)
		{
			for (i=0;i<w;i++)
			printf("#");
			printf("\n");
		}
	return 0;

}