/*
	题目：打印楼梯，同时在楼梯上方打印两个笑脸。
	程序分析：用 ASCII 1 来输出笑脸；用i控制行，j来控制列，j根据i的变化来控制输出黑方格的个数。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	int i,j;
	printf("@@\n"); /*输出两个笑脸*/
	for(i=1;i<11;i++)
	{
		for(j=1;j<=i;j++)
			printf("%c%c",219,219);
		printf("\n");
	}

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}