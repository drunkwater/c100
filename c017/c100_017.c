/*
	题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。
	例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。
	程序分析：关键是计算出每一项的值。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	int s=0,a,n,t;
	printf("请输入 a 和 n：\n");
	scanf("%d%d",&a,&n);
	t=a;
	while(n>0)
	{
		s+=t;
		a=a*10;
		t+=a;
		n--;
	}
	printf("a+aa+...=%d\n",s);

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}