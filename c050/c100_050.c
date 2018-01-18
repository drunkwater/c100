/*
	题目：学习使用按位与 &。
	程序分析：0&0=0; 0&1=0; 1&0=0; 1&1=1 。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	int a,b;
	a=077;
	b=a&3;
	printf("a & b(decimal) 为 %d \n",b);
	b&=7;
	printf("a & b(decimal) 为 %d \n",b);

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}