/*公平大陸上有許多小王國，常常為了爭奪領土而開戰，但是因為公平大陸上的居民都是非常講究公平的，因此絕對不允許有以多欺少的情形，所以在開戰之前，他們 會先統計兩方的兵力，如果有一方的兵力是比較多的，則那一方必須撤出部分的兵力，使兩方的兵力相等，你能幫他們完成這項工作嗎？
Input：
第一行有一個正整數 N (1<=N<=10) 代表接下來有幾組資料，
接下來有 N 行，每行有兩個正整數 A、B，代表 A、 B兩方的兵力。
Output：
依照每一組資料，請先輸出 Case X:，代表是第 X 組的結束，接下來輸出哪一方(A 或 B)必須撤兵，以及要撤出多少兵力，才能使兩方的兵力相等，如果兩方原本的兵力就相同，則請輸出 0，每組資料輸出完請換行。
Sample Input：help

2
100 150
160 100
Sample Output ：

Case 1: B 50
Case 2: A 60
Hint ：
第一行有一個整數，告訴你題目總共有幾組測試資料，接下來每一組資料的答案輸出時，都要附上這是第幾組的答案。你可以用一個 for 迴圈讓它執行指定的次數，並以迴圈變數 i 記錄目前是第幾組的測試資料：

cin >> n;
for (i=1; i<=n; i++)
{
    ....
    cout << "Case " << i << ": ";
    ....
}

Author ：
連續輸入 (管理員：sagit)*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int a,b,n,i;

	scanf("%d",&n);


	for (i=1;i<=n;i++)
	{	
		scanf("%d %d",&a,&b);
		if (feof(stdin)) break;

		if (a>b)
			printf("Case %d: A %d\n",i,a-b);
		else if (b>a)
			printf("Case %d: B %d\n",i,b-a);
		else if (a==0&&b==0) break;
		else 
			printf("Case %d: 0 \n",i);

	}

	return 0;


}