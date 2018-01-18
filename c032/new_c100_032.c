/*
	题目：判断一个数字是否为质数。
	程序分析：质数（prime number）又称素数，有无限个。一个大于1的自然数，除了1和它本身外，不能被其他自然数整除。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//宏定义布尔类型
#define BOOL int
#define TRUE 1
#define FALSE 0

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	int n;
	printf("输入一个大于1的自然数：\n");
	scanf("%d",&n);
	BOOL flag = TRUE;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			printf("不是质数\n");
			flag = FALSE;
			break;
		}
	}
	if(flag||n==1||n==2)
	{
		printf("是质数\n");
	}


	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}

