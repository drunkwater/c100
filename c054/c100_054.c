/*
	题目：学习使用按位取反~。
	程序分析：~0=1; ~1=0;
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);


	int a,b;
	a=234;
	b=~a;
	printf("a 的按位取反值为（十进制） %d \n",b);
	a=~a;
	printf("a 的按位取反值为（十六进制） %x \n",a);

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}