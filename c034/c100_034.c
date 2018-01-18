/*
	题目：字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void reverse(char* s)
{
    // 获取字符串长度
    int len = 0;
    char* p = s;
    while (*p != 0)
    {
        len++;
        p++;
    }
    
    // 交换
    int i = 0;
    char c;
    while (i <= len / 2 - 1)
    {
        c = *(s + i);
        *(s + i) = *(s + len - 1 - i);
        *(s + len - 1 - i) = c;
        i++;
    }
}


int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	char s[] = "abcdef";
	printf("'%s' => ", s);
	reverse(s);           // 反转字符串
	printf("'%s'\n", s);

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}