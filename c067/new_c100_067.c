/*
	题目：有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面的m个数。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>





void fun(int arr[],int m,int size)
{
    int i,j,k=0;
    int buf[size];
    for(i=0;i<size;i++)
    {
        buf[i]=arr[i];
    }
    for(i=0;i<m;i++)
    {
        arr[i]=arr[size-m+i];
    }
    for(j=i;j<size;j++)
    {
        arr[j]=buf[k++];
    }
}

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);


	int i,j,a[100],n=0,m;
	char ch=0;
	printf("请输入一组整数：\n");
	while(ch!='\n')
	{
		scanf("%d",&a[n++]);
		ch=getchar();
	}
	printf("请输入向后移动几位：");
	scanf("%d",&m);
	fun(a,m,n);
	printf("向后移动后:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}

