/*
	题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
	程序分析：利用while语句,条件为输入的字符不为'\n'。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	char c;
	int letters=0,spaces=0,digits=0,others=0;
	printf("请输入一些字母：\n");
	while((c=getchar())!='\n')
	{
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
			letters++;
		else if(c>='0'&&c<='9')
			digits++;
		else if(c==' ')
			spaces++;
		else
			others++;
	}
	printf("字母=%d,数字=%d,空格=%d,其他=%d\n",letters,digits,spaces,others);

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}