/*
	题目：取一个整数a从右端开始的4～7位。
	程序分析：可以这样考虑：
	(1)先使a右移4位。
	(2)设置一个低4位全为1,其余全为0的数。可用~(~0<<4)
	(3)将上面二者进行&运算。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);


#define HIGH (7)
#define LOW  (4)

	unsigned a,b,c,d;
	printf("请输入整数：\n");
	scanf("%d",&a);
	b=a>>4;
	c=~(~0<<4);
	d=b&c;
	printf("%08x\n%08x\n",a,d);


	int i = 0;
	unsigned int mask = 0;
	for (i=LOW;i<=HIGH;i++)
	{
		mask |= (0x1<<i);
	}
	d=(a&mask)>>(LOW-0);
	printf("%08x\n%08x\n",a,d);

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}