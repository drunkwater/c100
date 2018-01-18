/*
	题目：输入某年某月某日，判断这一天是这一年的第几天？
	程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊情况，闰年且输入月份大于3时需考虑多加一天
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	int year, month, day,sumday=0;
	int monthday[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	printf("请输入年、月、日，格式为：年,月,日（2015,12,10）\n");
	scanf("%d,%d,%d",&year,&month,&day);
	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
	{
		monthday[1] =29;
	}
	for (int i = 0; i < month-1; i++)
	{
		sumday += monthday[i];
	}
	sumday += day;
	printf("%d\n",sumday);

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}

