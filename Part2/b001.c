/*
Content： 简体中文
西元9999年，地球即將爆炸，一行人搭上名為「挪亞方舟」的太空船，準備逃離地球。但是，這艘太空船的啟動密碼是要將畫面上一閃而過的數個數字，倒著輸入進入，才能讓它起飛。你，能完成這項任務嗎？
Input：
一開始有一個正整數 N (1<=N<=10)，代表後面會出現幾個數字，接下來即是這 N 個整數。
Output：
請將這 N 個整數，依原本的順序反向輸出。
Sample Input：help

輸入1:
3 1 2 3

輸入2:
4 2 4 6 8
Sample Output ：

輸出1:
3 2 1

輸出2:
8 6 4 2
Hint ：
Author ：
陣列應用-記錄 (管理員：sagit)

*/
#include <stdio.h>

int main()
{
	int number[10],i,n;

	scanf("%d",&n);

	for (i=0;i<n;i++)
		scanf("%d",&number[i]);

	for (i=n-1;i>=0;i--)
		printf("%d ",number[i]);

	return 0;


}