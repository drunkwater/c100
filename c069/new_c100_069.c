/*
	题目：写一个函数，求一个字符串的长度，在main函数中输入字符串，并输出其长度。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void length(char *str)
{
    char *p=str;
    while(*p!='\0')
    p++;
    printf("字符串长度为：%d\n",p-str);
}



int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	char s[]="123456789";
	length(s);


	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}

