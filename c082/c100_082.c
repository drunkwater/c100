/*
	题目：求0—7所能组成的奇数个数。

	程序分析：
	这个问题其实是一个排列组合的问题，设这个数为 sun=a1a2a3a4a5a6a7a8,a1-a8 表示这个数的某位的数值，
	当一个数的最后一位为奇数时，那么这个数一定为奇数，不管前面几位是什么数字。如果最后一位数为偶数，则这个数一定为偶数。

	a1-a8可以取 0-7 这个八个数字，首位数字不为 0。

	从该数为一位数到该数为8位数开始统计奇数的个数：
	1.当只有一位数时也就是该数的最后一位，奇数个数为4
	2.当该数为两位数时，奇数个数为4*7=28
	3.当该数为三位数时，奇数个数为：4*8*7=224
	...
	8.当该数为八位数时，奇数个数为：4*8*8*8*8*8*8*7(依次为最后一位到第一位)
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);



	long sum = 4, s = 4;//sum的初始值为4表示，只有一位数字组成的奇数个数为4个
	int j;
	for (j = 2; j <= 8; j++)
	{
		printf("%d位数为奇数的个数%ld\n", j-1, s);
		if (j <= 2)
			s *= 7;
		else
			s *= 8;
		sum += s;
	}
	printf("%d位数为奇数的个数%ld\n", j-1, s);
	printf("奇数的总个数为：%ld\n", sum);

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}