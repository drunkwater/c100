/*
	题目：宏#define命令练习3
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define LAG >
#define SMA <
#define EQ ==



int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);




	int i,j;
	printf("请输入两个数字：\n");
	scanf("%d %d",&i,&j);
	if(i LAG j)
		printf("%d 大于 %d \n",i,j);
	else if(i EQ j)
		printf("%d 等于 %d \n",i,j);
	else if(i SMA j)
		printf("%d 小于 %d \n",i,j);
	else
		printf("没有值。\n");

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}