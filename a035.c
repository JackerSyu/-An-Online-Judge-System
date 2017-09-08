//a035
/*你知道210是幾位數嗎？答案是4位數，當然你可以一個一個乘開，得到210=1024，而數學家發明了 log 函數，你可以用它快速地求出 ab 是幾位數。
Input：
輸入兩個正整數 a、b (1<=a、b<=1000000)。
Output：
請輸出 ab 是幾位數。
Sample Input：help

2 10
Sample Output ：

4
Hint ：
請使用 double

Author ：
數學函數-log10 (管理員：sagit)
*/

#include <stdio.h>
#include <math.h>

int main ()
{
	double a,b;
	scanf("%lf %lf",&a,&b);
	printf("%.f\n",floor(b*log10(a))+1);
	return 0;

}