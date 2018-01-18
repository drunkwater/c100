/*
	题目：读取7个数（1—50）的整数值，每读取一个值，程序打印出该值个数的＊
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);




	int n,i,j;
	printf("请输入数字:\n");
	for(i=0;i<7;i++)
	{
		scanf("%d",&n);
		if(n>50)
		{
			printf("请重新输入:\n");i--;
		}
		else
		{
			for(j=0;j<n;j++)
				printf("*");
		}
		printf("\n");
	}

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}