//a036
/*Input：
輸入兩個正整數 A、B，代表 A、 B兩方的兵力。
Output：
請輸出哪一方(A 或 B)必須撤兵，以及要撤出多少兵力，才能使兩方的兵力相等，如果兩方原本的兵力就相同，則請輸出 0。
Sample Input：help

100 150
Sample Output ：

B 50
Hint ：
這是系列題的第一題，用一般執行一次的寫法就可以了，接下來四題則是同一個題目在四種不同連續輸入方式的變化。

Author ：
(管理員：sagit)

*/

#include <stdio.h>
#include <math.h>

int main ()
{
	int a,b;

	scanf("%d %d",&a,&b);

	if (a>b)
		printf("A %d\n",a-b);

	else if (b>a)
		printf("B %d\n",b-a);
	else 
		printf("0 \n");

	return 0;


}