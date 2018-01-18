/*
	题目：字符串排序。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>



void swap(char*str1,char*str2)
{
	char tem[20];
	strcpy(tem,str1);
	strcpy(str1,str2);
	strcpy(str2,tem);
}

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);


	char str1[256],str2[256],str3[256];
	printf("请输入3个字符串,每个字符串以回车结束!:\n");
	fgets( str1, 255, stdin );
	fgets( str2, 255, stdin );
	fgets( str3, 255, stdin );

	if(strcmp(str1,str2)>0)swap(str1,str2);
	if(strcmp(str2,str3)>0)swap(str2,str3);
	if(strcmp(str1,str2)>0)swap(str1,str2);
	printf("排序后的结果为：\n");
	printf("%s\n%s\n%s\n",str1,str2,str3);



	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}
