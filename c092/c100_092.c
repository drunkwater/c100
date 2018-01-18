/*
	题目：时间函数举例
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include <time.h>


int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);



	long i=10000000L;
	clock_t start,finish;
	double TheTimes;
	printf("做%ld次空循环需要的时间为",i);
	start=clock();
	while(i--);
	finish=clock();
	TheTimes=(double)(finish-start)/CLOCKS_PER_SEC;
	printf("%f秒。\n",TheTimes);

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}