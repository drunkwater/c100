/*
	题目：学习使用register定义变量的方法
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	register int i;
	int tmp=0;
	for(i=1;i<=100;i++)
		tmp+=i;
	printf("总和为 %d\n",tmp);

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}