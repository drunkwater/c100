/*
	题目：删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	char ch;
	int i, j;
	char s[] = "I want to learn English.";
	puts(s);
	printf("请输入要删除的字母: ");
	scanf("%c", &ch);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ch)
		{
			for (j = i; s[j] != '\0'; j++)
			{
				s[j] = s[j + 1];
			}
			s[j] = '\0';
		}
	}
	puts(s);

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}

