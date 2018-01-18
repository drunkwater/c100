/*
	题目：判断101到200之间的素数。
	程序分析：判断素数的方法：用一个数分别去除2到sqrt(这个数)，如果能被整除， 则表明此数不是素数，反之是素数。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	int i,j,k;
	for(i=101;i<201;i++)
	{
		k=sqrt(i);   //如果i不能被2~√i间任一整数整除，i必定是素数
		for(j=2;j<=k;j++) if(i%j==0) break;
		if(j>k) printf("%d\n",i);
		//  else printf("%d is  not aprime number",i);
	}

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}

/* gcc -o test new_c100_011.c -lm;./test */