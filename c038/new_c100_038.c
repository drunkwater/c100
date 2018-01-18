/*
	题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
	程序分析：首先判断此数是否大于最后一个数,然后再考虑插入中间的数的情况,插入后此元素之后的数,依次后移一个位置。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N (5)
void sort(int a[],int n)
{
	int i,j,min,t;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			t=a[min];
			a[min]=a[i];
			a[i]=t;
		}
	}
	return;
}


int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	int i,j,a[N+1];
	printf("请输入5个数字：\n");
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,N);
	printf("排序后：\n");
	for(i=0;i<N;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("请输入想要插入的数字：");
	scanf("%d",&j);
	a[N]=j;
	sort(a,N+1);
	printf("插入后排序：\n");
	for(i=0;i<N+1;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}

