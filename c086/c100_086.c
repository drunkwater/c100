/*
	题目：回答结果（结构体变量传递）
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>



struct student
{
	int x;
	char c;
} a;


void f(struct student b)
{
	b.x=20;
	b.c='y';
}



int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);




	a.x=3;
	a.c='a';
	f(a);
	printf("%d,%c",a.x,a.c);

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}