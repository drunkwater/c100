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
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);


	int x,i=0,j=1;
	while(i<5)
	{
		x=4*j;
		for(i=0;i<5;i++)
		{
			if(x%4!=0){break;}
			x=(x/4)*5+1;
		}
		j++;
	}
	printf("%d\n",x);

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}