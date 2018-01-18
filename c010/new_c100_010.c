/*
	题目：古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，
	小兔子长到第三个月后每个月又生一对兔子，
	假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）

	程序分析：兔子的规律为数列1,1,2,3,5,8,13,21....，即下个月是上两个月之和（从第三个月开始）。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	int n[41], i;    //定义

	n[0] = 0;    //赋值
	n[1] = 1;
	n[2] = 1;
	for (i = 3; i < 41; i++)
	{
		n[i] = n[i - 1] + n[i - 2];
	}

	printf("month\tnumber\n");    //输出
	for (i = 1; i < 41; i++)
	{
		printf("%d\t%d\n", i, n[i]);
	}

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}

