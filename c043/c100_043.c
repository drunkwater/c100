/*
	题目：学习使用external的用法
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int a,b,c;
void add()
{
    int a;
    a=3;
    c=a+b;
}


int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	a=b=4;
	add();
	printf("c 的值为 %d\n",c);
	return 0;

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}