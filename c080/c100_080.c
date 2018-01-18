/*
	题目：809*??=800*??+9*?? 其中??代表的两位数, 809*??为四位数，8*??的结果为两位数，9*??的结果为3位数。
	求??代表的两位数，及809*??后的结果
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);


	long int a,b,i;
	a = 809;
	for(i = 10; i < 100; i++)
	{
		b = i * a;
		if (b >= 1000 && b <= 10000 && 8 * i < 100 && 9 * i >= 100)
		{
			printf("\n%ld = 800 * %ld + 9 * %ld\n", b,i,i);
		}
	}


	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}