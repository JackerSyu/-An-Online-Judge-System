/*
Content： 简体中文
無限猴子定理的表述如下：讓一隻猴子在打字機上隨機地按鍵，當按鍵時間達到無窮時，幾乎必然能夠打出任何給定的文字，比如莎士比亞的全套著作。(引用自維基百科)這是機率論裡學者提出的一個例子，但是現實生活中，不可能有猴子可以活到無窮，也有學者提出猴子要打出一句合乎文法的句子的機率可以說是趨近於零，所以我們現在將它做一點修改，就是如果猴子打的文字，去掉某幾個字元之後，如果符合我們給定的文字，就算達成任務了。

現在給你一個指定的文字和猴子輸入的文字，請你檢查是不是符合我們的條件。

Input：
輸入兩個字串，第一個是指定的文字，第二個是猴子輸入的文字。
Output：
如果猴子輸入的文字去掉某幾個(包含0個)字元之後，可以和指定的文字完全相同，則輸出 YES，否則輸出 NO。(註：大小寫視為不同字元)
Sample Input：help

輸入1:
ABC AXBXC

輸入2:
YES YyesS
Sample Output ：

輸出1:
YES

輸出2:
NO
Hint ：
Author ：
字串應用-字元比對 (管理員：sagit)
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char words[20],monkey[100];
	int i=0,j,s=0;
	int length_word,length_monkey;

	scanf ("%s %s",words,monkey);

	length_word=strlen(words);
	length_monkey=strlen(monkey);


	for (j=s;j<length_monkey;j++)
		if(words[i]==monkey[j])
			{	
				s=j+1;
				i++;
			}


	if(i!=length_word)
		printf("NO\n");
	else
		printf("YES\n");

	return 0;




}