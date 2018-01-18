/*
	题目：输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	int i,j,t,a[100],n=0;
	char c=0;
	int min,max;
	printf("请输入一组数据\n");
	while(c!='\n')
	{
		scanf("%d",&a[n++]);
		c=getchar();
	}
	max=0;
	min=n-1;
	for(i=1;i<n;i++)
	{
		if(a[max]<a[i])
		{
			max=i;
		}
	}
	if(max!=0)
	{
		t=a[0];
		a[0]=a[max];
		a[max]=t;
	}
	for(j=n-2;j>=0;j--)
	{
		if(a[min]>a[j])
		{
			min=j;
		}
	}
	if(min!=n-1)
	{
		t=a[n-1];
		a[n-1]=a[min];
		a[min]=t;
	}
	printf("交换后的数组\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}

