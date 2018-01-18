/*
	题目：输入三个整数x,y,z，请把这三个数由小到大输出。
	程序分析：我们想办法把最小的数放到x上，先将x与y进行比较，如果x>y则将x与y的值进行交换，然后再用x与z进行比较，如果x>z则将x与z的值进行交换，这样能使x最小。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void InsSort(int a[],int n);

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	int a[4];
	printf("Please enter the num:");
	scanf("%d%d%d",a+1,a+2,a+3);
	InsSort(a,4);
	printf("%d,%d,%d",*(a+1),*(a+2),*(a+3));

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}


//直接插入排序，类似打扑克发牌整理扑克，每加入一个数据，就整理有序一次，
//依次比较后移
//数据放置在a[1]之后，a[0]放置标志位，在每趟循环中，也起到防止下标越界作用
void InsSort(int a[],int n)
{
	/* sanity check */
	int i,j;
	//第一趟从第二个数字开始，认为第一个数字有序
	for(i=2;i<=n;i++)
	{
		//将待插入数据放入a[0]
		a[0]=a[i];
		j=i;
		//a[0]和前一项比较，前一项较大则前一项后移，覆盖后一项……
		while(a[j-1]>a[0])
		{
			a[j]=a[j-1];
			//前一项已经后移的前提下，a[0]和前一项的前一项比较
			j--;
		}
		a[j]=a[0];
	}
}