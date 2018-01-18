/*
	题目：时间函数举例
	程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去 掉不满足条件的排列。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include <time.h>


int main( int argc, char *argv[] )
{
	/* sanity check */
	int i = 0, j = 0, k = 0;
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);



	time_t rawtime;
	struct tm * timeinfo;

	time ( &rawtime );
	timeinfo = localtime ( &rawtime );
	printf ( "当前本地时间为: %s", asctime (timeinfo) );

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}