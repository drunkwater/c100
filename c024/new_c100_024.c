/*
	题目：求1+2!+3!+...+20!的和。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	int i, j;
	long long c;
	long long sum = 0.0;
	for (i = 1; i <= 20; i++)
	{
		c = 1;
		for (j = 1; j <=i ; j++)
		{
			c *= j;
		}
		sum += c;
	}
	printf("1+2!+3!+...+20!的和为：%lld\n", sum);//2561327494111820313

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}

