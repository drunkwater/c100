/*
	题目：八进制转换为十进制
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);



	int n=0,i=0;
	char s[20];
	printf("请输入一个8进制数:\n");
	gets(s);
	while(s[i]!='\0')
	{
		n=n*8+s[i]-'0';
		i++;
	}
	printf("刚输入的8进制数转化为十进制为\n%d\n",n);


	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}