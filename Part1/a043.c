/*
如果一個正整數 A 可以被另一個正整數 B 整除，我們稱 B 為 A 的因數，例如 6 的因數有 1、2、3、6 等四個，而 9 的因數有 1、3、9 等三個，其中 1、3 為兩者公共的因數，我們稱之為「公因數」，其中最大的是 3，我們稱之為「最大公因數」。
Input：
輸入兩個正整數 A、B。
Output：
請輸出 A、B 的最大公因數。
Sample Input：help

輸入1:
6 9

輸入2:
20 12
Sample Output ：

輸出1:
3

輸出2:
4
Hint ：
輾轉相除法

Author ：
迴圈應用 (管理員：sagit)

*/

#include <stdio.h>

int main ()
{
	int a,b,temp;

	scanf("%d %d",&a,&b);

	while(b!=0)
	{
		temp=b;
		b=a%b;
		a=temp;

	}
	printf("%d\n",a);
	return 0;


}