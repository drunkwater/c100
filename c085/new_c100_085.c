/*
	题目：两个字符串连接。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	char a[100];
	char b[100];
	puts("请输入两个字符串，用回车分开:");
	scanf("%s%s", a, b);
	puts(strcat(a,b));

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}

