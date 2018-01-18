/*
	题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
	程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去 掉不满足条件的排列。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TRUE 1
#define FALSE 0
#define SQ(x) (x)*(x)


int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);


	int num;
	int again=1;
	printf("如果值小于 50 程序将终止。\n");
	while(again)
	{
		printf("\n请输入数字：");
		scanf("%d",&num);
		printf("该数字的平方为 %d \n",SQ(num));
		if(num>=50)
			again=TRUE;
		else
			again=FALSE;
	}

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}