/*
	题目：学习使用按位或 |。
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
	b=a|3;
	printf("按位或 | b 的值为 %d \n",b);
	b|=7;
	printf("按位或 | b 的值为 %d \n",b);

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}