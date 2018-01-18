/*
	题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，
	求它在第10次落地时，共经过多少米？第10次反弹多高？
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	float h,s;
	h=s=100;
	h=h/2; //第一次反弹高度
	for(int i=2;i<=10;i++)
	{
		s=s+2*h;
		h=h/2;
	}
	printf("第10次落地时，共经过%f米，第10次反弹高%f米\n",s,h);
	/* 第10次落地时，共经过299.609375米，第10次反弹高0.097656米 */

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}