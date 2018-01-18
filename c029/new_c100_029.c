/*
	题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	char str[5];
	printf("请输入五位数:");
	scanf("%s",str);

	if(str[0]==str[4]&&str[1]==str[3])
		printf("这是一个回文数。\n");
	else
		printf("这不是回文数。\n");

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}

