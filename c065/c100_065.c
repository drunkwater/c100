/*
	题目：输入3个数a,b,c，按大小顺序输出。
	程序分析：利用指针方法。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>



void swap(int *s1, int *s2)
{
	int t;
	t = *s1;
	*s1 = *s2;
	*s2 = t;
}



int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);


	int a, b, c;
	int *p1, *p2, *p3;
	printf("输入 a, b ,c:\n");
	scanf("%d %d %d", &a, &b, &c);
	p1 = &a;
	p2 = &b;
	p3 = &c;
	if(a>b)
		swap(p1, p2);
	if(a>c)
		swap(p1, p3);
	if(b>c)
		swap(p2, p3);
	printf("%d %d %d\n", a, b, c);







	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}