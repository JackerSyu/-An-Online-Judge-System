/*
Content： 简体中文
如果一個字串，從前面唸過去，跟從後面唸回來是一樣的，例如阿巴合唱團 ABBA 就符合這個條件，這樣的文字我們稱它為「迴文」。現在給你一個字串，請你判斷它是不是一個迴文。
Input：
輸入一個字串，以判斷它是不是一個迴文。
Output：
如果輸入的文字是迴文，請輸出 YES，否則輸出 NO。(判斷時大小寫視為不同文字)
Sample Input：help

輸入1:
ABBA

輸入2:
ABCD
Sample Output ：

輸出1:
YES

輸出2:
NO
Hint ：
Author ：
字串應用-字元拆解 (管理員：sagit)

*/

#include <stdio.h>
#include <string.h>

int main()
{
	char string[20];
	int i,n,j,flag=0;

	scanf("%s",string);
	n=strlen(string);

	j=n-1;
	for (i=0;i<n/2;i++)
		if (string[i]!=string[j])
			flag=1;
		else
			j--;
	if(flag!=0)
		printf("NO\n");
	else
		printf("YES\n");


	return 0;
}