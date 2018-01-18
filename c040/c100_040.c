/*
	题目：学习static定义静态变量的用法。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void fun()
{
	int i=0;
	static int static_i=0;
	printf("i=%d\n",i);
	printf("static_i=%d\n",static_i);
	i++;
	static_i++;
}


int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	for(int i=0;i<3;i++)
		fun();

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}