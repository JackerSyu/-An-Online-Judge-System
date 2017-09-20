/*
Content： 简体中文
綠苑電台為了方便讓聽眾點播歌曲，便將電台內所有取得授權的歌曲編號(1~100000000的正整數)，聽眾在明信片上註明歌曲編號，即可完成點播。為了知道本年度最熱門的點播是哪一首，小亮亮把所有明信片翻了出來一張一張看，發現看到一半，就忘記每一首歌的點播次數了。現在想請你寫一個程式，幫小亮亮找出最熱門的歌曲是哪一曲。

 

Input：
一開始有一個正整數 N (1<=N<=20)，代表有幾張明信片的點播，接下來有 N 個 1~100000000 的正整數，代表這 N 張明信片所點播的歌曲編號。
Output：
請輸出點播次數最高的歌曲編號，以及它的點播次數(不用考慮最高點播次數的歌曲有兩首以上的情況)，中間請空一格。
Sample Input：help

輸入1:
3 10 20 20

輸入2:
6 55 33 44 33 22 33
Sample Output ：

輸出1:
20 2

輸出2:
33 3
Hint ：
Author ：
陣列應用-計數 (管理員：sagit)
*/

#include <stdio.h>

int main()
{
	int N,songs[20],i,j,MAX=0,amount[20],W;

	scanf("%d",&N);

	for (i=0;i<N;i++)
		scanf("%d",&songs[i]);
	
	for (int i = 0; i < N; ++i)
		amount[i]=0;


	for (i=0;i<N;i++)
		for(j=0;j<N;j++)
			if(songs[i]==songs[j])
				amount[i]++;
	W=songs[0];
	for (i=0;i<N;i++)
		if(MAX<amount[i])
		{
			MAX=amount[i];
			W=songs[i];
		}





	printf("%d %d \n",W,MAX );


	return 0;
}
