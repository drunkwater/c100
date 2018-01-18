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

	#define N 10
	int a[N]={0,1,2,3,4,5,6,7,8,9};
	int i,t;
	printf("原始数组是:\n");
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
	for(i=0;i<N/2;i++)
	{
		t=a[i];
		a[i]=a[N-1-i];
		a[N-1-i]=t;
	}
	printf("\n逆序后的数组:\n");
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
	printf("\n");

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}