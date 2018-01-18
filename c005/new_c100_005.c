/*
	题目：用*号输出字母C的图案。
	程序分析：可先用'*'号在纸上写出字母C，再分行输出。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


const char c_char[] = {
"****\n"
"*\n"
"*\n"
"****\n"
};

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	printf("%s", c_char);

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}

