/*
	利用递归方法求5!
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fact(int j)
{
	int sum;
	if(j==0)
	{
		sum=1;
	}
	else
	{
		sum=j*fact(j-1);
	}
	return sum;
}

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	int i;
	int fact(int);
	for(i=0;i<6;i++)
	{
		printf("%d!=%d\n",i,fact(i));
	}

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}