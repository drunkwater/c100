/*
	题目：两个字符串连接。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>



char* strconnect(char *str1,char *str2)
{
	char*str;
	str=(char*)malloc(strlen(str1)+strlen(str2)+1);
	str[0]='\0';
	strcat(str,str1);
	strcat(str,str2);
	return str;
}



int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);




	char str1[20],str2[20];
	char *str;
	puts("请输入两个字符串，用回车分开:");
	scanf("%s%s", str1, str2);
	str=strconnect(str1,str2);
	puts("连接后的字符串为:");
	puts(str);

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}