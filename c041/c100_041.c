/*
	题目：学习使用auto定义变量的用法
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	int i,num;
	num=2;
	for(i=0;i<3;i++)
	{
		printf("num 变量为 %d \n",num);
		num++;
		{
			auto int num=1;
			printf("内置模块 num 变量为 %d \n",num);
			num++;
		}
	}

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}