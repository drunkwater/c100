/*
	题目：将一个数组逆序输出。
	程序分析：用第一个与最后一个交换
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	int i,num,a[10]={0,1,2,3,4,5,6,7,8};
	for(i=0;i<=8;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=8;i>=0;i--)
	{
		printf("%d ",a[i]);
	}

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}

