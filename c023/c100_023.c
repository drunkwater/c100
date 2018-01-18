/*
	题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
	程序分析：请抓住分子与分母的变化规律。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	int i,t;
	float sum=0;
	float a=2,b=1;
	for(i=1;i<=20;i++)
	{
		sum=sum+a/b;
		t=a;
		a=a+b;
		b=t;
	}
	printf("%9.6f\n",sum);
	/* 32.660263; 32bit_ubuntu 32.660259; */

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}