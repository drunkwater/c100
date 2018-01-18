/*
	题目：宏#define命令练习2。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define exchange(a,b) { int t;t=a;a=b;b=t;}//注意放在一行里




int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);


	int x=10;
	int y=20;
	printf("x=%d; y=%d\n",x,y);
	exchange(x,y);
	printf("x=%d; y=%d\n",x,y);

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}