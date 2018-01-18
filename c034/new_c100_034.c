/*
	题目：字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(char *str)
{
    int len;
    char tmp;
    char *begin,*end;
    len=strlen(str); //获取字符串长度]
    begin=str;       //指针begin指向字符串首地址
    end=str+len-1;     //指针end指向字符串尾地址
    while(begin<end)
    {
        tmp=*begin;
        *begin=*end;
        *end=tmp;
        begin++;
        end--;
    }
}



int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	char string[]="abcdef";
	puts(string);
	reverse(string);
	puts(string);

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}

