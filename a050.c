/*
Content： 简体中文
還記得國小學過的九九乘法表嗎？「二一得二、二二得四、二三得六、………九八七十二、九九八十一」。
Input：
輸入一個正整數 N (1<=N<=9)，代表要輸出的乘法表的大小。
Output：
請依照下面輸出範例的格式，輸出從 1x1=1 到 NxN 的乘法表，乘積的部分請以兩格來表示，兩欄之間也請空兩格。
Sample Input：help

4
Sample Output ：

1x1= 1  2x1= 2  3x1= 3  4x1= 4
1x2= 2  2x2= 4  3x2= 6  4x2= 8
1x3= 3  2x3= 6  3x3= 9  4x3=12
1x4= 4  2x4= 8  3x4=12  4x4=16
Hint ：
可以利用 cout << setw(2) << x; 的方式，讓輸出的數字以兩格的寬度輸出。

請 #include ‹iomanip›

Author ：
多重迴圈 (管理員：sagit)
*/

#include <stdio.h>

int main()
{
	int n,i,j,k;

	scanf("%d",&n);

	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			printf("%dx%d=%2d  ",j,i,j*i);
		}
		printf("\n");
	}

	return 0;

}