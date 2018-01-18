/*
	题目：打印出如下图案（菱形）。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	int i,j,k;
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=2-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=2*i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=4-2*i;k++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}