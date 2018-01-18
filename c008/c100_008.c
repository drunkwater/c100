/*
	题目：要求输出国际象棋棋盘。
	程序分析：国际象棋棋盘由64个黑白相间的格子组成，分为8行*8列。用i控制行，j来控制列，根据i+j的和的变化来控制输出黑方格，还是白方格。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	int i,j;
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			//fflush(stdout);
			if((i+j)%2==0)
			{
				printf("%c%c",219,219);
			}
			else
			{
				printf("  ");
			}
		}

		printf("\n");
	}

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}