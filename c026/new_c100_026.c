/*
	利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void fun(char* s,int length)
{
	if (length >= 1)
	{
		printf("%c\n", s[length - 1]);
		fun(s, length - 1);
	}
}

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	char* s = "abcdef";
	int length = 5;
	fun(s, length);

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}

