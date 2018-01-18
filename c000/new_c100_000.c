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
	int i = 0;// 百位
	int j = 0;// 十位
	int k = 0;// 个位
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	for (i=1; i<5; i++)
	{
		for (j=1; j<5; j++)
		{
			// 百位与十位重复, 跳过当前十位
			if (j==i)
			{
				continue;
			}

			for (k=1; k<5; k++)
			{
				// 个位与百位或十位重复, 跳过当前个位
				if (k==j || k==i)
				{
					continue;
				}

				printf("%u,%u,%u\n", i, j, k);
			}
		}
	}

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}

