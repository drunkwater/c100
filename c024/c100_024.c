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

	int i;
	long long sum,mix;
	sum=0,mix=1;
	for(i=1;i<=20;i++)
	{
		mix=mix*i;
		sum=sum+mix;
	}  
	printf("%lld\n",sum);//2561327494111820313

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}