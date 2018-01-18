/*
	题目：时间函数举例2
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include <time.h>


int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);




	time_t start,end;
	int i;
	start=time(NULL);
	for(i=0;i<0x000FFFFF;i++)
	{
		printf("\n");  // 返回两个time_t型变量之间的时间间隔
	}
	end=time(NULL);

	// 输出执行时间
	printf("时间间隔为 %6.3f\n",difftime(end,start));
	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}