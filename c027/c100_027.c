/*
	题目：有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，他说比第3个人大2岁。
	问第三个人，又说比第2人大两岁。问第2个人，说比第一个人大两岁。最后问第一个人，他说是10岁。
	请问第五个人多大？
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int age(int n)
{
	int c;
	if(n==1) c=10;
	else c=age(n-1)+2;

	return(c);
}

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	printf("%d\n",age(5));


	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}