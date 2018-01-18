/*
	题目：删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// 删除字符串中指定字母函数
char* deleteCharacters(char * str, char * charSet)
{
	int hash [256];
	if(NULL == charSet)
	return str;
	for(int i = 0; i < 256; i++)
	hash[i] = 0;
	for(int i = 0; i < strlen(charSet); i++)
		hash[charSet[i]] = 1;
	int currentIndex = 0;
	for(int i = 0; i < strlen(str); i++)
	{
		if(!hash[str[i]])
		str[currentIndex++] = str[i];
	}
	str[currentIndex] = '\0';

	return str;
}

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	char string[] = "abcdefabcdef";  // 目标字符串
	printf("%s\n", deleteCharacters(string, (char *)"a"));

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}