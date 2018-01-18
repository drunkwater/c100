/*
	题目：打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。
	例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。
	程序分析：利用for循环控制100-999个数，每个数分解出个位，十位，百位
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);
	int i,x,y,z;
	for(i=100;i<1000;i++)
	{
		x=i%10;
		y=i/10%10;
		z=i/100%10;

		if(i==(x*x*x+y*y*y+z*z*z))
			printf("%d\n",i);
	}

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}