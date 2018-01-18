/*
	题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
	程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去 掉不满足条件的排列。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	int i = 0, j = 0, k = 0;
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);
	for(i=1;i<5;i++)
	{ // 以下为三重循环
		for(j=1;j<5;j++)
		{
			for (k=1;k<5;k++)
			{ // 确保i、j、k三位互不相同
				if (i!=k&&i!=j&&j!=k)
				{
					printf("%d,%d,%d\n",i,j,k);
				}
			}
		}
	}

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}