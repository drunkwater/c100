/*
	给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


static char str[5];
void Reverse_Output(int n)
{
	while(n>0)
	{
		printf("%c ",str[--n]);
	}
}

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	printf("请输入你的整数:");
	scanf("%s",str);
	printf("这是一个 %d 位数。\n",strlen (str));
	printf("逆序为:");
	Reverse_Output(strlen (str));

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}

