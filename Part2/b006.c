/*
Content： 简体中文
這記得我們在 a001 寫過「Hello!」這一題嗎？當我們知道對方的名字或稱呼時，通常會在 Hello 後面接上他的名字或稱呼，例如「Hello, Mary!」。
Input：
輸入一個字串，代表要問好對象的名字。
Output：
若對方的名字為 XXX，則輸出「Hello, XXX!」(不含「」，請注意中間有空一格)。
Sample Input：help

輸入1:
Mary

輸入2:
Kitty
Sample Output ：

輸出1:
Hello, Mary!

輸出2:
Hello, Kitty!
Hint ：
Author ：
字串應用-輸入 (管理員：sagit)


*/

#include <stdio.h>
int main()
{
	char name[200];

	scanf(" %s",name);

	printf("Hello, %s!\n",name);

	return 0;
}