/*
Content： 简体中文
我們形容一個人把文章背得很熟，甚至可以倒著背的情況，叫做「倒背如流」。不過如果可以把英文單字的字母倒著背回來，又是另一個層次的問題了，你能做到嗎？
Input：
輸入一個字串。
Output：
將輸入的字串依相反的字元順序輸出。
Sample Input：help

輸入1:
Hello

輸入2:
World
Sample Output ：

輸出1:
olleH

輸出2:
dlroW
Hint ：
Author ：
字串應用-字元拆解 (管理員：sagit)
*/

#include <stdio.h>
#include <string.h> /*new header*/

int main()
{
	int len,i;
	char str[20];

	scanf("%s",str);

	len=strlen(str);/*get the length of the string*/

	for(i=(len-1);i>=0;i--)

		printf("%c",str[i]);
	printf("\n");
	return 0;
}