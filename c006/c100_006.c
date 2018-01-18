/*
	题目：输出特殊图案，请在c环境中运行，看一看，Very Beautiful!
	程序分析：字符共有256个。不同字符，图形不一样。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	char a=176,b=219;
	printf("%c%c%c%c%c\n",b,a,a,a,b);
	printf("%c%c%c%c%c\n",a,b,a,b,a);
	printf("%c%c%c%c%c\n",a,a,b,a,a);
	printf("%c%c%c%c%c\n",a,b,a,b,a);
	printf("%c%c%c%c%c\n",b,a,a,a,b);

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}