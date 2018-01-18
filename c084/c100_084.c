/*
	判断一个素数能被几个9整除
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include <limits.h>


int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);



	int p,i;
	long long sum=9;
	printf("请输入一个素数:\n");
	scanf("%d",&p);
	int found = 0;
	for(i=1;i<32;i++)
	{
		if(sum >= INT_MAX)
		{
			break;
		}

		if(sum%p==0)
		{
			found = 1;
			break;
		}
		else
		{
			sum=sum*10+9;
		}
	}
	if (0==found)
	{
		printf("No, 素数%d不能整除%d个9组成的数 %lld\n",p,i,sum);
	}
	else
	{
		printf("Yes, 素数%d能整除%d个9组成的数 %lld\n",p,i,sum);
	}



	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}