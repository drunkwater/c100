/*
	题目：打印出杨辉三角形（要求打印出10行）
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	int i,j;
	int a[10][10];
	printf("\n");
	for(i=0;i<10;i++)
	{
		a[i][0]=1;
		a[i][i]=1;
	}
	for(i=2;i<10;i++)
		for(j=1;j<i;j++)
			a[i][j]=a[i-1][j-1]+a[i-1][j];
	for(i=0;i<10;i++)
	{
		for(j=0;j<=i;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}


	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}